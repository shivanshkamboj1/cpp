#include<iostream>
using namespace std;


void byTakingExtraSpace(int arr[],int k,int n,int newArr[]){
    //loop to add k element at first
    int j=0;
    for(int i=n-k;i<n;i++){
        newArr[j++]=arr[i];
    }
    //fill left over array;
    for(int i=0;i<n-k;i++){
        newArr[j++]=arr[i];
    }
}
    
int main()
{
    int arr[8]={5,4,8,9,3,5,4,8};
    int n=8;
    int k=3;
    int newArr[n]={0};
    byTakingExtraSpace(arr,k,n,newArr);
    for(auto i:newArr){
        cout<<i<<" ";
    }
    return 0;
}