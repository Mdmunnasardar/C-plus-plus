#include <iostream>
using namespace std;

void countingSort(int n, string &s) {
    int freq[26] = {0};

    // Count occurrences of each character
    for (int i = 0; i < n; i++) {
        freq[s[i] - 'a']++;
    }

    // Print characters in sorted order
    for (int i = 0; i < 26; i++) {
        while (freq[i]--) {
            cout << (char)('a' + i);
        }
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    countingSort(n, s);
    return 0;
}
