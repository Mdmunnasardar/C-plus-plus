#include <iostream>
#include<cmath>
using namespace std;

int main() {
    long A,B,C,D;
    cin>>A>>B>>C>>D;

    double result=B*log(A);
    double result1=D*log(C);

    if(result>result1){
        cout<<"YES";
    }else{
    cout<<"NO";
    }
    return 0;
}