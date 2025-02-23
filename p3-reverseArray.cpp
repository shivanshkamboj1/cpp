#include<iostream>
using namespace std;
    
    
int main()
{
    int arr[8]={5,4,8,9,3,7,2,1};
    int n=8;
    int i=0,j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++,
        j--;
    }
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}