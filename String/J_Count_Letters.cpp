#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;  // Read the input string

    int freq[26] = {0};  // Array to store frequency of 'a' to 'z'

    // Count occurrences of each character
    for (char c : S) {
        freq[c - 'a']++;
    }

    // Print letters in ascending order
    for (char c = 'a'; c <= 'z'; c++) {
        if (freq[c - 'a'] > 0) {
            cout << c << " : " << freq[c - 'a'] << endl;
        }
    }

    return 0;
}
