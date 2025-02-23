#include<iostream>
using namespace std;
    
bool checkArm(int n){
    int first=n;
    int reverse=0;
    while(n){
        int last=n%10;
        last=last*last*last;
        reverse+=last;
        n=n/10;
    }
    if(first==reverse)return true;
    else{
        return false;
    }
}
    
int main()
{
    int n=154;
    cout<<checkArm(n);
    return 0;
}