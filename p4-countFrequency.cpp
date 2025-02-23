#include<iostream>
using namespace std;
#include<vector>   
#include<limits.h>
#include<unordered_map>


int findMax(int arr[],int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    return maxi;
}
int main()
{
    int arr[8]={5,4,8,9,3,5,4,8};
    int n=8;
    // int count=findMax(arr,n);
    // vector<int>check(count+1,0);
    // for(auto i:arr){
    //     check[i]++;
    // }
    // for(int i=0;i<check.size();i++){
    //     if(check[i]!=0){
    //         cout<<"element is "<<i<<" "<<"count is "<<check[i]<<endl;
    //     }
    // }
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto i:mp){
        cout<<"element is "<<i.first<<" count is "<<i.second<<endl;
    }



    return 0;
}