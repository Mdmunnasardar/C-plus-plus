#include <bits/stdc++.h>
using namespace std;

/* -------------------- Generic Backtracking Template -------------------- */
// Modify the three hooks: isValid, choose, unchoose. Call solve().

struct Backtracker {
    vector<int> choices;        // candidate choices (e.g., numbers, columns, etc.)
    vector<int> state;          // current partial solution
    vector<vector<int>> ans;    // collect solutions (optional)

    // Check if adding choices[idx] keeps the state valid
    bool isValid(int next) {
        // Example: avoid duplicates in state (for demo)
        // Replace with problem-specific constraint.
        return find(state.begin(), state.end(), next) == state.end();
    }

    void choose(int next) { state.push_back(next); }
    void unchoose(int)     { state.pop_back(); }

    void dfs() {
        // Stopping condition (example): used all choices
        if (state.size() == choices.size()) {
            ans.push_back(state);
            return;
        }
        for (int c : choices) {
            if (!isValid(c)) continue;
            choose(c);
            dfs();
            unchoose(c);
        }
    }

    vector<vector<int>> solve(const vector<int>& items) {
        choices = items;
        state.clear(); ans.clear();
        dfs();
        return ans;
    }
};

/* -------------------- Example 1: All permutations -------------------- */

vector<vector<int>> permutations(vector<int> nums) {
    vector<vector<int>> res;
    function<void(int)> backtrack = [&](int i) {
        if (i == (int)nums.size()) { res.push_back(nums); return; }
        for (int j = i; j < (int)nums.size(); ++j) {
            swap(nums[i], nums[j]);
            backtrack(i + 1);
            swap(nums[i], nums[j]);
        }
    };
    backtrack(0);
    return res;
}

/* -------------------- Example 2: N-Queens (return board layouts) -------------------- */

vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>> res;
    vector<int> col(n, 0), diag(2*n, 0), anti(2*n, 0); // columns, main diag r-c+n, anti r+c
    vector<string> board(n, string(n, '.'));

    function<void(int)> place = [&](int r) {
        if (r == n) { res.push_back(board); return; }
        for (int c = 0; c < n; ++c) {
            if (col[c] || diag[r - c + n] || anti[r + c]) continue;
            col[c] = diag[r - c + n] = anti[r + c] = 1;
            board[r][c] = 'Q';
            place(r + 1);
            board[r][c] = '.';
            col[c] = diag[r - c + n] = anti[r + c] = 0;
        }
    };
    place(0);
    return res;
}

/* -------------------- Demo -------------------- */
int main() {
    // Permutations demo
    vector<int> a = {1, 2, 3};
    auto perms = permutations(a);
    cout << "Permutations of {1,2,3}:\n";
    for (auto &p : perms) {
        for (int x : p) cout << x << ' ';
        cout << '\n';
    }

    // N-Queens demo
    int n = 4;
    auto boards = solveNQueens(n);
    cout << "\nN-Queens for n=" << n << " (" << boards.size() << " solutions):\n";
    for (auto &b : boards) {
        for (auto &row : b) cout << row << '\n';
        cout << '\n';
    }

    // Generic template demo (just shows structure; not problem-specific)
    Backtracker bt;
    auto sols = bt.solve({1,2,3}); // with default isValid = no duplicates
    cout << "Generic template produced " << sols.size() << " states of length "
         << (sols.empty()?0:sols[0].size()) << '\n';

    return 0;
}
