#include<iostream>
using namespace std;

bool checkPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0)return false;
    }
    return true;
} 
    
int main()
{
    int n=20;
    for(int i=3;i<n;i++){
        bool ans=checkPrime(i);
        if(ans)cout<<i<<endl;
    }

    return 0;
}