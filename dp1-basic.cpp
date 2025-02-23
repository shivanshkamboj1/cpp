#include<iostream>
using namespace std;
#include <chrono> 
using namespace chrono; 
#include<vector>


int solve(int n){
    if(n==0||n==1)return n;
    int ans1=solve(n-1);
    int ans2=solve(n-2);
    return ans1+ans2;
}
long topDown(int n,vector<long>&check){
    if(n==0||n==1)return n;
    if(check[n]!=-1)return check[n];
    check[n]=topDown(n-2,check)+topDown(n-1,check);
    return check[n];
}
int bottomUp(int n,vector<int>&dp){
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int spaceOpti(int n){
    int prev1=1;
    int prev0=0;
    if(n<2)return n;
    int curr=0;
    for(int i=2;i<=n;i++){
        curr=prev0+prev1;
        prev0=prev1;
        prev1=curr;
    }
    return curr;
}
int main()
{
    int n=120;
    vector<long>check(n+1,-1);
    auto start = high_resolution_clock::now();
    // cout<<bottomUp(n,check)<<endl;
    // check.clear();
    cout<<topDown(n,check)<<endl;
    cout<<spaceOpti(n)<<endl;
    // for(auto i:check){
    //     cout<<i<<" ";
    // }

    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<milliseconds>(stop - start); 
    cout << "Execution Time: " << duration.count() << " ms" << endl;
    return 0;
}