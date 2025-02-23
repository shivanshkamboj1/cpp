#include<iostream>
using namespace std;
#include<unordered_map>
    
int main()
{

    int arr[]={1,2,2,3,4,5,5,6,6,6,7};
    unordered_map<int,int>mp;
    for(int i:arr){
       mp[i]++;
    }
    int sum=0;
    for(auto i:mp){
        if(i.second<2){
            sum+=i.first;
        }
    }
    cout<<sum;
    return 0;
}