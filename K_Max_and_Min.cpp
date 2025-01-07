#include<iostream>
using namespace std;

int main(){
    int A,B,C;
    int Minimum;
    int maximum;
    cin>>A>>B>>C;

    if(A<=B&&A<=C){
        Minimum=A;
    }
    else if(B<=A&&B<=C){
        Minimum=B;
    }
    else{
        Minimum=C;
    
    }

    if (A>=B&&A>=C)
    {
        maximum=A;
    }
    else if(B>=A&&B>=C){
        maximum=B; 
     }

    else{
        maximum=C;
    }

    cout<<Minimum<<" "<<maximum;

    return 0;
}