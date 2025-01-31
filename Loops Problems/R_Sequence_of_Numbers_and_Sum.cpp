#include <iostream>
using namespace std;

int main() {
    while (true) {
        int N, M;
        cin >> N >> M;
        
        if (N <= 0 || M <= 0)
            break; // Terminate if any number is <= 0
        
        int start = min(N, M);
        int end = max(N, M);
        int sum = 0;
        
        for (int i = start; i <= end; i++) {
            cout << i << " ";
            sum += i;
        }
        cout << "sum =" << sum << endl;
    }
    
    return 0;
}
