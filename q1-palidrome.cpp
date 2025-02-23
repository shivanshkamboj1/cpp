#include<iostream>
using namespace std;

bool checkPalidrome(int n){
    int first=n;
    int reverse=0;
    while(n){
        int last=n%10;
        reverse=reverse*10+last;
        n=n/10;
    }
    if(first==reverse)return true;
    else{
        return false;
    }
}

int main()
{
    int n=500;
    for(int i=100;i<=n;i++){
        bool a = checkPalidrome(i);  
        if(a)cout<<i<<endl;
    }
    return 0;
}