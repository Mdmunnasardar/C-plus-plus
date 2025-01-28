#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Upper half of the diamond (including the middle)
    for (int i = 1; i <= N; i++) {
        // Print leading spaces
        for (int j = 1; j <= N - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half of the diamond
    for (int i = N; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= N - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
