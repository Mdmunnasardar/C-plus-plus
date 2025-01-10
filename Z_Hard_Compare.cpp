#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int A,B,C,D;
    cin>>A>>B>>C>>D;

    int result=pow(A,B);
    int result1=pow(C,D);

    if(result>result1){
        cout<<"YES";
    }else{
    cout<<"NO";
    }
    return 0;
}