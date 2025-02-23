#include<iostream>
using namespace std;
    
    
int main()
{
    int arr[8]={5,4,8,9,3,5,4,8};
    int n=8;
    int sum=0;
    for(auto i:arr){
        sum+=i;
    }
    cout<<sum;
    return 0;
}