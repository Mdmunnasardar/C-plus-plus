#include <iostream>
using namespace std;
int main()
{
    long long N;
    cin >> N;
    long long i;
    long long sum = 0;

    for (i = 0; i <= N; i++)
    {
        sum += i;
    }
    cout << sum;
}