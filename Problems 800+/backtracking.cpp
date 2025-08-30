#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<string>> solutions;

// Backtracking function
void solve(int row, vector<int>& col, vector<int>& diag1, vector<int>& diag2, vector<string>& board) {
    if (row == n) {
        solutions.push_back(board);
        return;
    }
    for (int c = 0; c < n; c++) {
        if (col[c] || diag1[row - c + n - 1] || diag2[row + c]) continue;
        col[c] = diag1[row - c + n - 1] = diag2[row + c] = 1;
        board[row][c] = 'Q';
        
        solve(row + 1, col, diag1, diag2, board);
        
        // backtrack
        board[row][c] = '.';
        col[c] = diag1[row - c + n - 1] = diag2[row + c] = 0;
    }
}

int main() {
    cout << "Enter the size of the chessboard (n): ";
    cin >> n;

    vector<int> col(n, 0), diag1(2*n-1, 0), diag2(2*n-1, 0);
    vector<string> board(n, string(n, '.'));

    solve(0, col, diag1, diag2, board);

    cout << "\nTotal solutions: " << solutions.size() << "\n\n";
    for (int i = 0; i < solutions.size(); i++) {
        cout << "Solution " << i+1 << ":\n";
        for (auto& row : solutions[i]) {
            cout << row << "\n";
        }
        cout << "\n";
    }

    return 0;
}
