#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        bool hasY = false;
        for (char c : s) {
            if (c == 'Y') {
                hasY = true;
                break;
            }
        }

        if (!hasY || s.front() == 'N' || s.back() == 'N')
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
