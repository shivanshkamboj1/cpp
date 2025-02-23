#include<iostream>
using namespace std;
    
    
int main()
{
    int a=10,b=15;
    int gcd=1;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0&&b%i==0){
            gcd=i;
        }
    }
    int ans = (a*b)/gcd;
    cout<<ans;
    return 0;
}