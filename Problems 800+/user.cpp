#include <bits/stdc++.h>
using namespace std;

// Backtracking function to generate permutations
void backtrack(vector<int>& nums, vector<int>& path, vector<bool>& used, vector<vector<int>>& res) {
    if (path.size() == nums.size()) {
        res.push_back(path);
        return;
    }
    for (int i = 0; i < nums.size(); i++) {
        if (used[i]) continue;      // skip already used number
        used[i] = true;
        path.push_back(nums[i]);
        backtrack(nums, path, used, res);
        path.pop_back();
        used[i] = false;
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) cin >> nums[i];

    vector<vector<int>> res;
    vector<int> path;
    vector<bool> used(n, false);

    backtrack(nums, path, used, res);

    cout << "\nAll permutations:\n";
    for (auto &perm : res) {
        for (int x : perm) cout << x << " ";
        cout << "\n";
    }

    return 0;
}
 