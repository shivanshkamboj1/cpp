#include<iostream>
using namespace std;
#include<limits.h>   
    
int main()
{
    int mini=0;
    int maxi=0;
    int arr[]={10, 9, 8, 7, 6};
    int n=5;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                maxi=max(arr[j]-arr[i],maxi);
            }
        }
    }
    cout<<maxi;
    return 0;
}