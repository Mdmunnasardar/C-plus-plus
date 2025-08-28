#include <iostream>
using namespace std;
void swapNumbers(int &X, int &Y) {
    int temp = X;
    X = Y;
    Y = temp;
}

int main() {
    int X, Y;
    cin >> X >> Y;
    
    swapNumbers(X, Y);
    
    cout << X << " " << Y << endl;
    
    return 0;
}
