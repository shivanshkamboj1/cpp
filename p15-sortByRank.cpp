#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<map>
int main()

{
    vector<int> nums = {1,2,21,-3,0,-4,-5};
    vector<int>second(nums);
    sort(second.begin(),second.end());
    map<int,int>mp;
    int temp=1;

    for(auto i:second){
        mp[i]=temp;
        temp++;
    }
    for(auto i:nums){
        cout<<mp[i]<<" ";
    }
    return 0;
}