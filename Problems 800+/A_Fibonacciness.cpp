#include <iostream>
using namespace std;

int maxFibonacciness(int a1, int a2, int a4, int a5) {
    int maxFib = 0;
    int possible_a3_1 = a4 - a2;
    int possible_a3_2 = a5 - a4;

    for (int a3 : {possible_a3_1, possible_a3_2}) {
        int count = 0;
        if (a1 + a2 == a3) count++;
        if (a2 + a3 == a4) count++;
        if (a3 + a4 == a5) count++;
        maxFib = max(maxFib, count);
    }

    return maxFib;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;
        cout << maxFibonacciness(a1, a2, a4, a5) << endl;
    }
    return 0;
}
