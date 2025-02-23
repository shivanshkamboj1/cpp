#include<iostream>
using namespace std;
#include<vector>
//solve by recursion
int solve(vector<int>height,int n){
    if(n==0)return 0;
    if(n==1)return abs(height[1]-height[0]);

    int oneStep=solve(height,n-1)+abs(height[n]-height[n-1]);
    int twoStep=solve(height,n-2)+abs(height[n]-height[n-2]);
    return min(oneStep,twoStep);
}

//solve by topdonw

int topDown(vector<int>height,vector<int>dp,int n){
    if(n==0)return 0;
    if(n==1)return abs(height[1]-height[0]);    

    if(dp[n]!=-1){
        return dp[n];
    }
    int oneStep=topDown(height,dp,n-1)+abs(height[n]-height[n-1]);
    int twoStep=topDown(height,dp,n-2)+abs(height[n]-height[n-2]);
    return dp[n]=min(oneStep,twoStep);
}
int bottomUp(vector<int>height,int n){
    vector<int>dp(n+1,-1);
    dp[0]=0;
    dp[1]=abs(height[1]-height[0]);
    for(int i=2;i<=n;i++){
        int oneStep=dp[i-1]+abs(height[i]-height[i-1]);
        int twoStep=dp[i-2]+abs(height[i]-height[i-2]);
        dp[i]=min(oneStep,twoStep);
    }
    return dp[n];
}
int spaceOpti(vector<int>height,int n){
    int prev0=0;
    int prev1=abs(height[1]-height[0]);
    for(int i=2;i<=n;i++){
        int oneStep=prev1+abs(height[i]-height[i-1]);
        int twoStep=prev0+abs(height[i]-height[i-2]);
        int curr=min(oneStep,twoStep);
        prev0=prev1;
        prev1=curr;
    }
    return prev1;
}
int main()
{
    vector<int>height{20,30,40,20,60,34,75,8,4,74,47};
    vector<int>dp(height.size(),-1);
    cout<<spaceOpti(height,height.size()-1);
    // cout<<bottomUp(height,height.size()-1);
    // cout<<topDown(height,dp,height.size()-1);
    // cout<<solve(height,height.size()-1);
    return 0;
}