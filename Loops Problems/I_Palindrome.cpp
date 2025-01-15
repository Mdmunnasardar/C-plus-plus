#include <iostream>
using namespace std;

bool isPalindromeNumber(int num, int& reversedNum) {
    if (num < 0) return false;

    int originalNum = num;
    reversedNum = 0;

    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int main() {
    int number, reversedNumber;
   
    cin >> number;

    if (isPalindromeNumber(number, reversedNumber)) {
        cout << number<<endl ;
        cout<<"YES";
    } else {
        cout <<  reversedNumber<<endl;
        cout<<"NO";
    }

    return 0;
}
