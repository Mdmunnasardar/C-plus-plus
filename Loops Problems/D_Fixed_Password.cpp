#include <iostream>
using namespace std;

void check_password() {
    int password;
    while (cin >> password) {
        if (password == 1999) {
            cout << "Correct" << endl;
            break;
        } else {
            cout << "Wrong" << endl;
        }
    }
}

int main() {
    check_password();
    return 0;
}
