#include <iostream>
using namespace std;

int main()
{
    long A, B, C, D;
    cin >> A >> B >> C >> D;

    long multi = A * B * C * D;
    int rem = multi % 100;

    cout << rem;

    return 0;
}