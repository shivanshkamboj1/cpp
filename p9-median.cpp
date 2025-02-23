#include<iostream>
using namespace std;
#include<algorithm>
    
int main()
{
    int arr[8]={5,4,8,9,3,5,4,8};
    int n=8;
    sort(arr,arr+n);
    if(n%2==0){
        int med1=arr[n/2];
        int med2=arr[n/2]-1;
        cout<<(float)(med1+med2)/2;
    }
    else{
        cout<<arr[n/2];
    }
    return 0;
}