#include <iostream>
using namespace std;

int main()
{

    string S1, F1, S2, F2;
    cin >> S1 >> F1;

    cin >> S2 >> F2;
    if (F1 == F2)
        cout << "ARE Brothers";
    else
        cout << "NOT";
    return 0;
}