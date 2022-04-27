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

![ezgif com-gif-maker](https://user-images.githubusercontent.com/82291615/165399682-a0e91253-4035-451d-ac6e-13752a951949.gif)
