#include <iostream>
using namespace std;

void printNumbers(int N) {
    for (int i = 1; i <= N; i++) {
        if (i > 1) cout << " "; 
        cout << i;
    }
    cout << endl;
}

int main() {
    int N;
    cin >> N;
    printNumbers(N);
    return 0;
}
