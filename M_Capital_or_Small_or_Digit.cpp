#include <iostream>
using namespace std;

int main() {
    char X;
    cin>>X;

    if (X>='0'&& X<='9')
    {
      cout<<"IS DIGIT";
    }
    else if(X>='A'&& X<='Z')
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL";
    }
    else{
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL";
    }
    return 0;
}