#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int year = N / 365;
    int rem = N % 365;
    cout << year << " years" << endl;

    int Month = rem / 30;
    int rem1 = rem % 30;
    cout << Month << " months" << endl;

    cout << rem1 << " days" << endl;

    cout << endl;
    return 0;
}