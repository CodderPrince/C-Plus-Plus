import hashlib
import os
from telegram import Update
from telegram.ext import Updater, MessageHandler, filters, CommandHandler, CallbackContext

from telegram.error import TelegramError

# Dictionary to keep track of file hashes (you can replace this with a database)
file_hashes = set()

# Function to compute the hash of a file
def get_file_hash(file_path: str) -> str:
    sha256_hash = hashlib.sha256()
    with open(file_path, "rb") as f:
        # Read the file in chunks and update the hash
        for byte_block in iter(lambda: f.read(4096), b""):
            sha256_hash.update(byte_block)
    return sha256_hash.hexdigest()

# Handler for receiving files
def handle_file(update: Update, context: CallbackContext):
    file = update.message.document
    if file:
        file_id = file.file_id
        file_name = file.file_name
        file_path = f"./downloads/{file_name}"

        # Download the file
        file.download(file_path)

        # Get the hash of the file
        file_hash = get_file_hash(file_path)

        # Check if the file is a duplicate
        if file_hash in file_hashes:
            # If file is a duplicate, notify the user
            update.message.reply_text(f"The file '{file_name}' has already been uploaded.")
            os.remove(file_path)  # Clean up the file
        else:
            # If not a duplicate, add hash to the set and allow upload
            file_hashes.add(file_hash)
            update.message.reply_text(f"File '{file_name}' uploaded successfully.")
            
            # Optionally, delete the file after processing
            os.remove(file_path)

# Start the bot
def start(update: Update, context: CallbackContext):
    update.message.reply_text("Hello! I'm your file duplication checker bot.")

def main():
    # Replace 'YOUR_API_TOKEN' with your bot's API token
    updater = Updater("7975623600:AAEc-hHt-6P2P-qMjov_CcdTvWJlfOjZmwQ", use_context=True)
    dispatcher = updater.dispatcher

    # Handlers for commands and messages
    dispatcher.add_handler(CommandHandler("start", start))
    dispatcher.add_handler(MessageHandler(Filters.document, handle_file))

    # Start the bot
    updater.start_polling()
    updater.idle()

if __name__ == '__main__':
    main()
