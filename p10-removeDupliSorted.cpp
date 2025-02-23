#include<iostream>
using namespace std;
    
int remove(int arr[],int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i;
}
int main()
{
    int arr[]={1,2,2,2,4,4,5,6,6};
    int n=sizeof(arr)/sizeof(int);
    n=remove(arr,n);
    cout<<n;
    for(int i=0;i<=n;i++){
        cout<<arr[i];
    }
    cout<<n;
    return 0;
}