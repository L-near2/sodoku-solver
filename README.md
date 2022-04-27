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
   
4. ``` is_valid() ``` Function:
   - This function takes 3 arguments (the Sudoku board, the number to be placed in the cell, and the coordinates of the cell). This function does the same as the first function, it checks line, column, and square(basic Sudoku rules). If it matches the conditions, it returns 1 (True), otherwise it returns 0 (False).

   - True: The number can be placed in that cell.

   - False: This number cannot be placed in that cell.

5. ``` solve() ``` Function:
   1. - The last function is the most complex of the previous functions. I think it needs a lot of focus, especially if you don't know how recursive functions work.
   
        I will try to explain it in the simplest way possible.

      - So the first thing we will do is look for an empty cell. If we find an empty cell, that means we haven't filled out the whole sudoku board (we haven't found the solution yet).

        But if we do not find any empty cells, it means that all the cells have been filled in. It means that we have reached the end of the panel (the bottom right), and it is not possible to reach the end of the panel unless all the cells have been filled in with the appropriate number, and here there is no need to continue; we will exit the function.

        The function find_empty If it finds an empty cell, it returns its coordinates, and if not, it returns 0. 
      
   2. - After the find_empty() function returns the coordinates of the empty cell, we must fill it with the appropriate number.

        *How will we choose the right number?*

      - We will make a loop containing numbers from 1 to 9, and check that we can put this number in the cell with the help of the is_valid() function. If this function returns 1, it means we can put this number in this cell.

        So we replace the content of this cell with the number we have.

      - Now the empty cell is filled. What do you think will happen if we call the solve () function again? We will repeat all the previous steps, but don't forget the previous cell that was empty. Now it is not empty. So the function that checks for empty cells returns a cell other than the previous cell. We repeat the same operation.

        If it returns 0, we cannot put the number in the cell, so we move to the next number, and we repeat the previous steps.

        If we reach the number 9 and we do not find any suitable numbers, we will do what is known as backtracking, which is to reset the current cell and put the value 0 in it. And return to the cell before it and try another number. until you find the right solution.

###### The image below will summarize how this program works :

<p align="center">
  <img src="https://user-images.githubusercontent.com/82291615/165585630-bed4466d-0436-49f7-8b7e-db907e41f371.gif">
</p>
     


