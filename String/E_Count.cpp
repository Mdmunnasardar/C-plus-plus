#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;  
    
    int sum = 0;
    for (char digit : S) {
        sum += digit - '0';  // Convert character to integer and add to sum
    }
    
    cout << sum << endl; 
    return 0;
}
