#include<bits/stdc++.h>
using namespace std;


void printBoard(int board[N][N]) {
   for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++)
         cout << board[i][j] << " ";
         cout << endl;
   }
}

bool isValid(int board[N][N], int row, int col){
    // left column
    for(int c = 0; c<col; c++)
        if (board[row][c]) return false;
    // upper left
    for(int r = row, c = col;  r>=0 && col>=0; r--, col--)
        if(board[r][c]) return false;
    // lower right
    for(int r = row, c = col; r<row && col>=0; r++, col--)
        if(board[r][c]) return false;
    
    return true;
}

bool solveNQ(int board[N][N], int col){
    if(col>=N){
        return true;
    }
    for(int r = 0; r<N; r++){
        if(isValid(board, r, col)){
            board[r][col] = 1;
            if( solveNQ(board, col+1) )
                return true;
            board[r][col] = 0;
        }
    }
    return false;
}

bool checkSolution(int N){
   vector<vector <int>> board;
    // adding zero to board
    for(int i = 0; i<N; i++)
        for(int j = 0; j<N; j++)
            board[i][j] = 0;

    if(solveNQ(board, 0) == false){
        cout << "Solution does not exist";
        return false;
    }
    printBoard(board);
    return true;
}

int main(){
    int N;
    checkSolution(N);
    return 0;
}