#include <iostream>
using namespace std;

int main()
{
     int  N;
    cin >> N;

     int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    int max=arr[0];
    for(int i=1;i<N;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout <<max<< endl;
    return 0;
}