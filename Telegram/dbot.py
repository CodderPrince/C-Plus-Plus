import logging
import os
import hashlib
from telegram import Update
from telegram.ext import ApplicationBuilder, CommandHandler, MessageHandler, ContextTypes, filters

# Replace with your actual token from @BotFather
BOT_TOKEN = "7907298315:AAGi1XeQPiTlfeHii22JsnkRbGlrPHuuwUQ"

# Setup logging for debugging
logging.basicConfig(format='%(asctime)s - %(name)s - %(levelname)s - %(message)s',
                    level=logging.INFO)

# Dictionary to store file hashes (key is hash, value is a list of user ids who sent the file)
file_hashes = {}


async def start(update: Update, context: ContextTypes.DEFAULT_TYPE):
    """Sends a welcome message when /start is used."""
    await context.bot.send_message(chat_id=update.effective_chat.id, text="Hi! Send me files to check for duplicates.")


async def handle_file(update: Update, context: ContextTypes.DEFAULT_TYPE):
    """Handles file attachments and checks for duplicates."""
    if update.message.document:
        file_id = update.message.document.file_id
        file = await context.bot.get_file(file_id)
        
        # Temporarily save the file to calculate hash
        file_path = f'temp_files/{file_id}_{update.message.document.file_name}'
        os.makedirs('temp_files', exist_ok=True)

        await file.download(file_path)

        # Compute the file's hash
        file_hash = hash_file(file_path)

        # Remove the temporary file
        os.remove(file_path)
    
    elif update.message.photo:
        
        file_id = update.message.photo[-1].file_id
        file = await context.bot.get_file(file_id)
        
        # Temporarily save the file to calculate hash
        file_path = f'temp_files/{file_id}_{update.message.photo[-1].file_unique_id}.jpg'
        os.makedirs('temp_files', exist_ok=True)

        await file.download(file_path)

        # Compute the file's hash
        file_hash = hash_file(file_path)

        # Remove the temporary file
        os.remove(file_path)

    else:
       await context.bot.send_message(chat_id=update.effective_chat.id, text="Sorry, I can't process this file type. Please send images or document files.")
       return

    
    user_id = update.message.from_user.id

    if file_hash in file_hashes:
        if user_id not in file_hashes[file_hash]:
            file_hashes[file_hash].append(user_id)
            await context.bot.send_message(chat_id=update.effective_chat.id,
                                            text="This file is a duplicate! Previously sent by other users.")
        else:
          await context.bot.send_message(chat_id=update.effective_chat.id,
                                          text="You have sent this file before!")
    else:
        file_hashes[file_hash] = [user_id]
        await context.bot.send_message(chat_id=update.effective_chat.id, text="File added! I will let you know if there are duplicates.")


def hash_file(file_path):
    """Generates a SHA-256 hash of the file content."""
    hasher = hashlib.sha256()
    with open(file_path, 'rb') as file:
        while True:
            chunk = file.read(4096)  # Read in chunks for large files
            if not chunk:
                break
            hasher.update(chunk)
    return hasher.hexdigest()


if __name__ == '__main__':
    application = ApplicationBuilder().token(BOT_TOKEN).build()

    # Add handlers
    application.add_handler(CommandHandler("start", start))
    application.add_handler(MessageHandler(filters.ALL, handle_file))

    application.run_polling()