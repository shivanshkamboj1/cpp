#include<iostream>
using namespace std;
#include<vector>
#include<limits.h>


// int bottomUp(vector<int>coins,int target){
//     vector<int>dp(target+1,INT_MAX);
//     dp[0]=0;
//     for(int i=1;i<=target;i++){
//         int mini=INT_MAX;
//         for(int j=0;j<coins.size();j++){
//             if(target-coins[i]>=0)
//             int ans=dp[target-coins[i]];
//             if(ans!=INT_MAX){
//                 ans++;
//                 mini=min(mini,ans);
//             }
//         }
//     }
//     return dp[target];
// }
int topDown(vector<int>coins,int target,vector<int>&dp){
    if(target==0)return 0;
    if (target<0)return INT_MAX;
    if(dp[target]!=-1)return dp[target];

    int mini=INT_MAX;
    for(int i=0;i<coins.size();i++){
        int ans=topDown(coins,target-coins[i],dp);
        if(ans!=INT_MAX){
            ans++;
            mini=min(mini,ans);
        }
    }
    dp[target]=mini;
    return mini;
}
int coinRec(vector<int>coins,int target){
    if(target==0)return 0;
    if(target<0)return INT_MAX;
    int mini=INT_MAX;
    for(int i=0;i<coins.size();i++){
        int ans=coinRec(coins,target-coins[i]);
        if(ans!=INT_MAX){
            mini=min(mini,ans+1);
        }
    }
    return mini;
}
int main()
{
    vector<int>coins{1,2};
    int target=3;
    vector<int>dp(target+1,-1);

    // auto start = high_resolution_clock::now();

    // cout<<topDown(coins,target,dp);

    // auto stop = high_resolution_clock::now();
    // auto duration = duration_cast<milliseconds>(stop - start); 
    // cout << "Execution Time: " << duration.count() << " ms" << endl;

    cout<<coinRec(coins,target);

    return 0;
}