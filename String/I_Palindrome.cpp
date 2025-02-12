#include <iostream>
#include <string>
#include <algorithm>  // Include this for reverse()

using namespace std;

int main() {
    string S;
    cin >> S;

    string revS = S;
    reverse(revS.begin(), revS.end());  // Reverse the string

    if (S == revS)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
