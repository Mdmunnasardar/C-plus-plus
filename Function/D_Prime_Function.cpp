#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(long long n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    
    for (long long i = 3; i * i <= n; i += 2) {
        for (long long j = 1; j * j <= i; ++j) {
            if (i % j == 0 && j > 1) return false;
        }
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        long long N;
        cin >> N;
        
        if (isPrime(N))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}
