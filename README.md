# sodoku-solver
sodoku solver using recursive function - backtracking

## How to Play Sudoku? (What is Sudoku)

> Sudoku is played on a grid of 9 x 9 spaces. Within the rows and columns are 9 “squares” (made up of 3 x 3 spaces). 
Each row, column and square (9 spaces each) needs to be filled out with the numbers 1-9, without repeating any numbers within the row, column or square.	

![sudoku answer2](https://user-images.githubusercontent.com/82291615/165534920-df4dba84-b213-484d-b85f-26f931a85aa5.png)

For [more details.](https://sudoku.com/how-to-play/sudoku-rules-for-complete-beginners/)

## Why This Program
 //
 
 //
 
 //
 
 //
 
 //
 
 //
 
 //
 
 ## Instructions
 ### How To Use:
 
 - Compile and run program using any C compiler.
 
 - To modify the board, change the values of the int board [9] [9] in the main function to match the sudoku you want to solve. Empty cells are represented by the number 0!.
 
 ![Input](https://user-images.githubusercontent.com/82291615/165542648-06a536a2-9098-4978-887b-1a76c8f17622.png)
 
 - *Board in main Function :*

```c
int board[9][9] = { { 7, 0, 2, 5, 3, 0, 0, 8, 0 },
                    { 0, 5, 9, 0, 2, 0, 0, 1, 0 },
                    { 0, 8, 0, 0, 4, 0, 0, 0, 0 },
                    { 6, 0, 0, 0, 8, 0, 4, 0, 9 },
                    { 0, 0, 5, 0, 6, 2, 0, 0, 8 },
                    { 0, 0, 0, 0, 7, 4, 5, 0, 0 },
                    { 0, 0, 7, 0, 0, 6, 0, 0, 0 },
                    { 9, 0, 0, 0, 0, 0, 7, 0, 0 },
                    { 0, 0, 0, 7, 5, 0, 1, 0, 6 } };
```

## How it works:
This program contains four main functions (print_board, find_empty, is_valid, and solve) and one optional function (valid_board).

1. ``` valid_board() ``` Function:
   - The purpose of this function is to check the input of the Sudoku board to determine whether it is valid or not. You can mistake the input and think that the program is not working, but the reason is that the Sudoku board is wrong in the first place.
					If you repeat a number in the same line, column, or square (Sudoku basic rules), the function will return 0 (False), and print the Sudoku board followed by the message "Invalid Sudoku puzzle." (Line 119).

2. ``` print_board() ``` Function:
   - There is nothing special about this function. I think it needs no explanation. This function just prints the Sudoku board.
   
3. ``` find_empty() ``` Function:
   - In short, what this function does is check every cell on every line (line after line), starting with the top left cell. Once the first empty cell is found (containing the value 0),it returns its coordinates.
   - Coordinates: 700 + row + col
   - I used this method because I didn't want to use tables. I think this method is simpler and better.

     
![ezgif com-gif-maker](https://user-images.githubusercontent.com/82291615/165399682-a0e91253-4035-451d-ac6e-13752a951949.gif)
