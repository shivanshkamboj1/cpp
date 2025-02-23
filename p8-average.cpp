#include<iostream>
using namespace std;
    
    
int main()
{
    int arr[8]={5,4,8,9,3,5,4,8};
    int n=8;

    float average=0;
    for(auto i:arr){
        average+=i;
    }
    cout<<average/n;
    return 0;
}