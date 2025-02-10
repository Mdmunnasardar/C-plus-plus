#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; 
    
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n; 
        int digit_sum = (n / 10) + (n % 10); 
        cout << digit_sum << endl; 
    }
    
    return 0;
}
