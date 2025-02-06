#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; // Read number of test cases
    while (T--) {
        int N;
        cin >> N;
        int onesCount = __builtin_popcount(N); // Error: NN is undeclared
        cout << ((1 << onesCount) - 1) << endl; // Compute and print decimal equivalent of binary with only onesCount ones
    }
    return 0;
}
