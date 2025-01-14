#include <iostream>
using namespace std;

unsigned long long factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int num;
    cin >> num;

    if (num <= 0)
    {
        cout << endl;
        return 0;
    }

    int arr[num];

    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < num; i++)
    {
        if (arr[i] < 0)
        {
            cout << endl;
        }
        else
        {
            cout << factorial(arr[i]) << endl;
        }
    }

    return 0;
}
