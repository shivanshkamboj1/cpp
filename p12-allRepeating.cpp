#include<iostream>
using namespace std;
#include<map>
    
int main()
{
    int arr[8]={5,4,8,9,3,5,4,8};
    int n=8;
    map<int,int>mp;
    for(auto i:arr){
        mp[i]++;
    }
    for(map<int,int>::iterator it=mp.begin();it!=mp.end();it++){
        if(it->second>1){
            cout<<it->first<<" ";
        }
    }
    return 0;
}