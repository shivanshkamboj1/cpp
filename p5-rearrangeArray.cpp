#include<iostream>
using namespace std;
#include<algorithm>
    
int main()
{
    int arr[8]={5,4,8,9,3,5,4,8};
    int n=8;
    sort(arr,arr+n);
    // cout<<arr;
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}