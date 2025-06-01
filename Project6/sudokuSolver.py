import streamlit as st
import numpy as np
import random

# Constants
SIZE = 9  # Sudoku board size

# Colors
colors = [
    "pink", "lightcoral", "lightsalmon", "lavender", "lightseagreen", 
    "palevioletred", "paleyellow", "paleturquoise", "palegreen", "thistle"
]

# Function to shuffle colors for 3x3 blocks
def shuffle_colors():
    random.shuffle(colors)
    return colors

# Function to check if the board has duplicates
def has_duplicates(board):
    seen = set()
    # Check rows
    for row in board:
        seen.clear()
        for cell in row:
            if cell != '.' and cell in seen:
                return True
            seen.add(cell)

    # Check columns
    for col in range(SIZE):
        seen.clear()
        for row in range(SIZE):
            if board[row][col] != '.' and board[row][col] in seen:
                return True
            seen.add(board[row][col])

    # Check 3x3 subgrids
    for i in range(0, SIZE, 3):
        for j in range(0, SIZE, 3):
            seen.clear()
            for row in range(i, i + 3):
                for col in range(j, j + 3):
                    if board[row][col] != '.' and board[row][col] in seen:
                        return True
                    seen.add(board[row][col])
    return False

# Function to solve the sudoku puzzle
def solve(board):
    for row in range(SIZE):
        for col in range(SIZE):
            if board[row][col] == '.':
                for num in '123456789':
                    if is_safe(board, row, col, num):
                        board[row][col] = num
                        if solve(board):
                            return True
                        board[row][col] = '.'  # Backtrack
                return False
    return True

# Function to check if it is safe to place the number in the cell
def is_safe(board, row, col, num):
    return not is_in_row(board, row, num) and not is_in_col(board, col, num) and not is_in_subgrid(board, row, col, num)

def is_in_row(board, row, num):
    return num in board[row]

def is_in_col(board, col, num):
    return num in [board[row][col] for row in range(SIZE)]

def is_in_subgrid(board, row, col, num):
    start_row = row - row % 3
    start_col = col - col % 3
    for i in range(start_row, start_row + 3):
        for j in range(start_col, start_col + 3):
            if board[i][j] == num:
                return True
    return False

# Function to display the solved board
def display_board(board):
    return [[str(cell) if cell != '.' else '' for cell in row] for row in board]

# Function to reset the board
def reset_board():
    global board
    board = [['.' for _ in range(SIZE)] for _ in range(SIZE)]

# Streamlit UI
st.title('Sudoku Solver | PRINCE')

# Initialize board
board = [['.' for _ in range(SIZE)] for _ in range(SIZE)]

# Shuffle colors for blocks
block_colors = shuffle_colors()

# Create Sudoku input grid
st.write("Enter numbers (1-9) or '.' for empty cells")

for row in range(SIZE):
    cols = []
    for col in range(SIZE):
        block_color = block_colors[(row // 3) * 3 + (col // 3)]
        cell = st.text_input(f'Cell {row+1}-{col+1}', value='', max_chars=1, key=f'cell_{row}_{col}')
        cols.append(cell)
    st.write(cols)

# Button to solve the puzzle
if st.button('Solve'):
    # Read input from the board
    input_board = [[st.session_state[f'cell_{row}_{col}'] if st.session_state.get(f'cell_{row}_{col}') else '.' for col in range(SIZE)] for row in range(SIZE)]

    if has_duplicates(input_board):
        st.error("Duplicate found in the board! Please check your input.")
    else:
        if solve(input_board):
            solved_board = display_board(input_board)
            st.write("Sudoku Solved!")
            for row in solved_board:
                st.write(row)
        else:
            st.error("No solution exists for this puzzle!")

# Button to reset the board
if st.button('Run Again'):
    reset_board()
    st.experimental_rerun()
