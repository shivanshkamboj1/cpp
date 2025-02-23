#include<iostream>
using namespace std;
#include<limits.h>
    
int main()
{
    int arr[8]={5,4,8,9,3,7,2,1};
    int n=8;
    int maxi=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<maxi){
            maxi=arr[i];
        }
    }
    cout<<maxi;
    return 0;
}