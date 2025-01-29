#include <iostream>
using namespace std;

void reverseDigits(int N) {
    while (N > 0) {
        cout << N % 10 << " ";
        N /= 10;
    }
    cout << endl;
}

int main() {
    int T, N;
    cin >> T;
    
    while (T--) {
        cin >> N;
        if (N == 0) {
            cout << "0" << endl;
        } else {
            reverseDigits(N);
        }
    }
    
    return 0;
}