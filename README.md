# Assignment1
Task Repo
# Circular Buffer Implementation (Assignment 1)

## Description
This project implements a Circular Buffer data structure in C. 
It demonstrates the difference between linear and circular storage by using front and rear pointers with a count variable to manage data flow.

## Logic Used
- Initialization: Sets all pointers and counters to zero.
- Circular Movement: Uses the modulo operator % to wrap pointers around the buffer.
- Overflow/Underflow: Handled by checking the count against the buffer SIZE.

## How to Run
1. Compile the code: gcc Assignment1.c -o prog
2. Run the executable: ./prog
3. Enter your name when prompted.
