#include<iostream>
using namespace std;
#include<limits.h>
    
int main()
{
    int arr[8]={5,4,8,9,3,7,2,5};
    int firstSmall=INT_MAX;
    int secondSmall=INT_MAX;
    int n=8;
    for(int i=0;i<n;i++){
        if(arr[i]<firstSmall){
            secondSmall=firstSmall;
            firstSmall=arr[i];
        }
    }
    cout<<firstSmall<<" "<<secondSmall;
    return 0;
}