#include <iostream>
using namespace std;
int main()
{

    int N, M;
    cin >> N >> M;
    int lastDigitOF_N = N % 10;
    int lastDigitOF_M = M % 10;

    int sum = lastDigitOF_N + lastDigitOF_M;

    cout << sum;
    return 0;
}