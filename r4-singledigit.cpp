#include<iostream>
using namespace std;
void solve(int n){
    if(n==0)return;
    int newN=n/10;
    solve(newN);
    cout<<newN<<" "<<endl;
    int digit = n%10;
    cout<<digit<<endl;
    // cout<<newN<<endl;
}   
    
int main()
{
    solve(647);
    return 0;
}