// Sudoku Solver.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
using namespace std;


bool isSafe(int board[9][9], int row, int col, int value)
{
    for (int i = 0; i < 9; i++)
    {
        if (board[i][col] == value)
            return false;
        if (board[row][i] == value)
            return false;
        if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3])
            return false;
    }
    return true;
}

bool solveSudoku(int board[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (board[i][j] == 0)
            {
                for (int k = 0; k < 9; k++)
                {
                    if (isSafe(board, i, j, k))
                    {
                        board[i][j] == k;
                        if (solveSudoku(board)) //recursion for Next step
                            return true;
                        else
                            board[i][j] = 0;//backTrack

                    }

                }
                return false;
            }
        }
    }
    return false;
}
void printGrid(int grid[N][N])
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << grid[i][j] << " ";
        }
        cout<<endl;
    }
}



int main()
{
    std::cout << "Hello World!\n";
    //make input
    return 0;
}

