#include<iostream>
using namespace std;
#include<vector>
#include<limits.h>
int solve(vector<int>coins,int target,int i){
    if(target==0)return 0;
    if(target<0)return INT_MAX;

    int mini=INT_MAX;
    for(int i=0;i<coins.size();i++){
        // cout<<i<<endl;
        int ans = solve(coins,target-coins[i],i+1);
        if(ans!=INT_MAX){
            ans++;
            mini=min(mini,ans);
            // cout<<mini<<" for i = "<<i<<endl;
        }
    }
    cout<<"the i is "<<i<<endl;
    return mini;
}
int solve2(vector<int>coins,int target,int &output){
    if(output==target)return 0;
    if(output>target)return INT_MAX;

    int mini=INT_MAX;
    for(int i=0;i<coins.size();i++){
        // cout<<i<<endl;
        int a=output+coins[i];
        int ans = solve2(coins,target,a);
        a=output-coins[i];
        if(ans!=INT_MAX){
            ans++;
            mini=min(mini,ans);
            // cout<<mini<<" for i = "<<i<<endl;
        }
    }
    cout<<mini<<endl;
    return mini;
}
    
int main()
{
    vector<int>coins={1,2};
    int target=3;
    cout<<"first";
    cout<<endl;
    int i=0;
    cout<<solve(coins,target,i);
    // cout<<endl;
    // cout<<"second";
    // cout<<endl;
    // int output=0;
    // cout<<solve2(coins,target,output);
    // cout<<endl;
    // cout<<output;
    return 0;
}