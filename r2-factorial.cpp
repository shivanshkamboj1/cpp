#include<iostream>
using namespace std;
int solve(int n){
    if(n==1)return 1;
    int ans=n*solve(n-1);
    return ans;

}
    
int main()
{
    int n=5;
    int ans=solve(n);
    cout<<ans;
    return 0;
}