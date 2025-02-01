#include <iostream>
using namespace std;

int main() {
    int n, num;
    cin >> n;
    
    int even_count = 0, odd_count = 0, positive_count = 0, negative_count = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num % 2 == 0) even_count++;
        else odd_count++;
        if (num > 0) positive_count++;
        if (num < 0) negative_count++;
    }
    
    cout << "Even: " << even_count << endl;
    cout << "Odd: " << odd_count << endl;
    cout << "Positive: " << positive_count << endl;
    cout << "Negative: " << negative_count << endl;
    
    return 0;
}
