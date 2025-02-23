#include<iostream>
using namespace std;
#include<map>
#include<limits.h>  
int main()
{
    int arr[8]={5,4,8,9,3,5,4,8};
    int n=8;
    map<int,bool>mp;
    for(int i=0;i<n;i++){
        if(mp.find(arr[i])==mp.end()){
            mp[arr[i]]=true;
        }
        else{
            arr[i]=INT_MIN;
        }
    }
    for(auto i:arr){
        if(i!=INT_MIN)
        cout<<i<<" ";
    }
    return 0;
}