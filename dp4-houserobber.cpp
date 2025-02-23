#include<iostream>
using namespace std;
#include<vector>
#include<limits.h>

int solve(vector<int>house,int n){
    if(n==0)return house[n];
    if(n<0)return 0;

    int include=solve(house,n-2)+house[n];
    int exclude=solve(house,n-1)+0;
    return max(include,exclude);
}
int solve2(vector<int>house,int n,int i){
    if(i==n)return house[i];
    if(i>n)return 0;

    int include=solve2(house,n,i+2)+house[i];
    int exclude=solve2(house,n,i+1);
    return max(include,exclude);
}
int topDown(vector<int>house,int n,vector<int>&dp){
    if(n==0)return house[n];
    if(n<0)return 0;
    if(dp[n]!=-1)return dp[n];
    int include=topDown(house,n-2,dp)+house[n];
    int exclude=topDown(house,n-1,dp);
    dp[n]=max(include,exclude);
    return dp[n];
}
int bottomUp(vector<int>house,int n){
    vector<int>dp(n+1,-1);
    dp[0]=house[0];
    int temp=0;
    for(int i=1;i<=n;i++){
        if(i-2>=0)temp=dp[i-2];
        int include=temp+house[i];
        int exclude=dp[i-1];
        dp[i]=max(exclude,include);
    }
    return dp[n];
}
int spaceOpti(vector<int>house,int n){
    int prev1=0;
    int prev2=house[0];
    int curr=0;
    for(int i=1;i<=n;i++){
        int include=prev2+house[i];
        int exclude=prev1;
        curr=max(include,exclude);

        prev2=prev1;
        prev1=curr;
    }
    return prev1;
}
int main()
{
    vector<int>house{1,2,3,1,5,7,9};
    int n=house.size();
    vector<int>dp(n,-1);
    int i=0;
    cout<<spaceOpti(house,n-1);
    // cout<<bottomUp(house,n-1); 
    // cout<<topDown(house,n-1,dp);
    // cout<<solve2(house,n-1,i);
    // cout<<solve(house,n-1);
    return 0;
}