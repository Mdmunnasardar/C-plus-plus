#include<iostream>
 using namespace std;
 
 int main(){
    int X,Y;
    cin>>X>>Y;
 
    int summation = X+Y;
    int multiplication =X*Y;
    int substraction= X-Y;
 
    cout<<X<<" + "<<Y<<" = "<<summation<<endl;
    cout<<X<<" * "<<Y<<" = "<<multiplication<<endl;
    cout<<X<<" - "<<Y<<" = "<<substraction<<endl;
    
    return 0;
 }