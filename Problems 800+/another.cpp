#include <bits/stdc++.h>
using namespace std;

int n, target;
vector<int> nums;
vector<vector<int>> solutions;

void backtrack(int idx, int currentSum, vector<int>& subset) {
    if (currentSum == target) {
        solutions.push_back(subset);
        return;
    }
    if (idx >= n || currentSum > target) return;

    // Include nums[idx]
    subset.push_back(nums[idx]);
    backtrack(idx + 1, currentSum + nums[idx], subset);
    subset.pop_back();

    // Exclude nums[idx]
    backtrack(idx + 1, currentSum, subset);
}

int main() {
    cout << "Enter number of elements: ";
    cin >> n;

    nums.resize(n);
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) cin >> nums[i];

    cout << "Enter target sum: ";
    cin >> target;

    vector<int> subset;
    backtrack(0, 0, subset);

    cout << "\nSubsets with sum = " << target << ":\n";
    if (solutions.empty()) {
        cout << "No subsets found.\n";
    } else {
        for (auto& s : solutions) {
            cout << "{ ";
            for (int x : s) cout << x << " ";
            cout << "}\n";
        }
    }

    return 0;
}
