#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    
    long long rem = 1;
    rem = (rem * A) % 100;
    rem = (rem * B) % 100;
    rem = (rem * C) % 100;
    rem = (rem * D) % 100;

    // Output the last two digits with leading zeros
    cout << setw(2) << setfill('0') << rem << endl;

    return 0;
}
