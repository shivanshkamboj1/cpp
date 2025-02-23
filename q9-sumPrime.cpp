#include<iostream>
using namespace std;
bool checkPrime(int n){
    if(n<2)return false;
    for(int i=2;i<n;i++){
        if(n%i==0)return false;
    }
    return true;
} 
    
int main()
{
    int n=50;
    for(int i=1;i<n/2;i++){
        if(checkPrime(i)&&checkPrime(n-i)){
            cout<<i<<" "<<n-i<<endl;
        }
    }
    cout<<"terminated";
    return 0;
}