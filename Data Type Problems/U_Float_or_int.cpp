#include <iostream>
using namespace std;

int main() {
    float N;
    cin >> N;  // Input the number

    int d = static_cast<int>(N);  // Get the integer part of N//also use int d=N;
    float R = N - d;              // Get the decimal (fractional) part of N

  
    if (R == 0) {
        cout << "int " << d << endl;  // If the decimal part is 0, print it as an integer
    } else {
        cout << "float " << d << " " << R << endl;  // Otherwise, print it as a float
    }

    return 0;
}
