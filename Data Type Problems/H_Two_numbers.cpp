#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double A, B;
    cin >> A >> B;

 
    double result = A / B;

    
    int floorResult = floor(result);
    int ceilResult = ceil(result);
    int roundResult = round(result);

   
    cout << "floor " << (int)A << " / " << (int)B << " = " << floorResult << endl;
    cout << "ceil " << (int)A << " / " << (int)B << " = " << ceilResult << endl;
    cout << "round " << (int)A << " / " << (int)B << " = " << roundResult << endl;

    return 0;
}
