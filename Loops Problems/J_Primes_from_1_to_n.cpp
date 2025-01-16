#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i <= sqrt(num); ++i)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

void printPrimesUpToN(int N)
{
    for (int i = 2; i <= N; ++i)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int N;

    cin >> N;

    printPrimesUpToN(N);

    return 0;
}
