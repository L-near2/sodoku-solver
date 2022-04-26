#include<stdio.h>
#include<stdlib.h>

//3. valid() function
int valid(int board[9][9], int num, int pos){
    //pos : 700 + row + col
    int i,j,row, col,box_row,box_col;
    row = (pos/10)-70;
    col = pos%10;

    //Check row
    for (i = row; i < row+1; i++)
        for (j = 0; j < 9; j++)
            if(board[i][j] == num && j != col)
                return 0; //0 : false

    //Check col
    for (i = col; i <col+1; i++)
        for (j = 0; j < 9; j++)
            if(board[j][i] == num && j != row)
                return 0; //0 : false

    //Check grid box
    box_row = row/3;
    box_col = col/3;
    for (i = (box_row*3); i < ((box_row*3)+3) ; i++)
        for (j = (box_col*3); j < ((box_col*3)+3) ; j++)
            if(board[i][j] == num && (i != row && j != col))
                return 0; //0 : false

    return 1; //1 : true
}


//1. print_board() function
void print_board(int board[9][9]){
    int i,j;
    for (i = 0; i < 9; i++){
        if(i%3 == 0 && i != 0) printf("---------------------------------\n");
        for (j = 0; j < 9; j++){
            if(j%3 == 0 && j != 0) printf(" | ");
            printf(" %d ", board[i][j]);
        }
        printf("\n");
    }
}

//2. find_empty() function
int find_empty(int board[9][9]){
    int i,j;
    for (i = 0; i < 9; i++)
        for (j = 0; j < 9; j++)
            if(board[i][j] == 0) return 700+(i*10)+j; //700 + row + col
    return 0;
}

//4. solve() function
int solve(int board[9][9]){
    int i,empty_pos,row,col;
    empty_pos = find_empty(board);
    row,col;
    if(!(empty_pos))
        return 1; //1: True
    else{
        row = empty_pos/10-70;
        col = (empty_pos%10);
    }
    for (i = 1; i < 10; i++){
        if(valid(board,i,empty_pos)){
            board[row][col] = i;

            if(solve(board)){
                return 1; //1 : True
            }
            board[row][col] = 0;
        }   
    }
    return 0; //0 : False
}

//5. valid_board() function
int valid_board(int board[9][9]){
    int i,j;
    for (i = 0; i < 9; i++)
        for (j = 0; j < 9; j++)
            if(board[i][j])
                if(( valid(board,board[i][j],700+(i*10)+j) ) == 0)
                    return 0;
    return 1;
}


int main(){
    int board[9][9] = { { 7, 0, 2, 5, 3, 0, 0, 8, 0 },
                        { 0, 5, 9, 0, 2, 0, 0, 1, 0 },
                        { 0, 8, 0, 0, 4, 0, 0, 0, 0 },
                        { 6, 0, 0, 0, 8, 0, 4, 0, 9 },
                        { 0, 0, 5, 0, 6, 2, 0, 0, 8 },
                        { 0, 0, 0, 0, 7, 4, 5, 0, 0 },
                        { 0, 0, 7, 0, 0, 6, 0, 0, 0 },
                        { 9, 0, 0, 0, 0, 0, 7, 0, 0 },
                        { 0, 0, 0, 7, 5, 0, 1, 0, 6 } };

    print_board(board);

    if(valid_board(board)){
        solve(board);
        printf("\n\n=================================\n\n");
        print_board(board);
    }

    else printf("Invalid sudoku puzzles..!!!\n");

    system("PAUSE");

    return 0;
}