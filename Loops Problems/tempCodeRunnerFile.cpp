#include <iostream>
using namespace std;

int main() {
    int N;
   
    cin >> N;

   
    for (int i = 1; i <= N; ++i) {
        if (i % 2 == 0) { 
            cout << i << endl;
        }else{
            cout<<'-1';
        }
    }

    return 0;
}
