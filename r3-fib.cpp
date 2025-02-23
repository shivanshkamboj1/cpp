#include<iostream>

using namespace std;
int solve(int n){
    if(n==0)return 0;
    if(n==1)return 1;
    // int ans=solve(n-1)+solve(n-2);
    int solve1=solve(n-1);
    int solve2=solve(n-2);
    return solve1+solve2;
}
    
int main()
{
    int n=7;
    int ans=solve(n);
    cout<<ans;
    return 0;
}