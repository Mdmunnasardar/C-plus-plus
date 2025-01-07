
#include<iostream>
using namespace std;

int main() {
    int input;
    cin >> input;  
    
    int sum = 0;
    
   
    while (input > 0) {
        int last_digit = input % 10;  
        sum += last_digit;           
        input /= 10;                  
    }
    
  
    cout << sum << endl; 
    
    return 0;
}
