#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    int num, minVal, maxVal;
    cin >> num;
    minVal = maxVal = num;
    
    for (int i = 1; i < N; i++) {
        cin >> num;
        if (num < minVal) minVal = num;
        if (num > maxVal) maxVal = num;
    }
    
    cout << minVal << " " << maxVal << endl;
    
    return 0;
}
