#include <iostream>
#include <vector>

using namespace std;

const int N = 8;

// Function to print the chessboard
void printSolution(const vector<vector<int>>& board) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to check if it's safe to place a queen at the given position
bool isSafe(const vector<vector<int>>& board, int row, int col) {
    // Check this row on left side
    for (int i = 0; i < col; ++i) {
        if (board[row][i])
            return false;
    }

    // Check upper diagonal on left side
    for (int i = row, j = col; i >= 0 && j >= 0; --i, --j) {
        if (board[i][j])
            return false;
    }

    // Check lower diagonal on left side
    for (int i = row, j = col; i < N && j >= 0; ++i, --j) {
        if (board[i][j])
            return false;
    }

    return true;
}

// Recursive function to solve the N-Queens problem
bool solveNQueens(vector<vector<int>>& board, int col) {
    if (col == N) {
        // All queens are placed successfully
        printSolution(board);
        return true;  // Uncomment this line to find only one solution
    }

    bool res = false;
    for (int i = 0; i < N; ++i) {
        if (isSafe(board, i, col)) {
            // Place queen
            board[i][col] = 1;

            // Recur to place rest of the queens
            res = solveNQueens(board, col + 1) || res;

            // If placing queen in the current position doesn't lead to a solution, then backtrack
            board[i][col] = 0;
        }
    }

    return res;
}

int main() {
    vector<vector<int>> board(N, vector<int>(N, 0));

    if (!solveNQueens(board, 0)) {
        cout << "Solution does not exist." << endl;
    }

    return 0;
}
