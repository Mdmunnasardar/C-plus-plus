#include <iostream>
using namespace std;

int main() {
    char ch;

    cin >> ch;

    if (ch>= 'a' && ch <= 'z') {
        ch = ch - 32; 
    } 
    else if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32; 
    }

    cout <<ch << endl;
    return 0;
}
