#include<iostream>
using namespace std;
    
    
int main()
{
    int arr[] = {2, 3, -1, 8, 4};
    int totalSum=0;
    int prefix=0;
    for(auto i:arr){
        totalSum+=i;
    }
    for(int i=0;i<5;i++){
        totalSum-=arr[i];
        if(prefix==totalSum)cout<<i;
        prefix+=arr[i];
    }

    return 0;
}