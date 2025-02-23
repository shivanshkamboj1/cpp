#include<iostream>
using namespace std;
    
    
int main()
{
    string s="shivans&#$^%h is %$good b&&oy";
    string after;
    for(auto i:s){
        if(((int)i>=65 && (int)(i)<=90) || ((int)i>=97 && (int)(i)<=122) || i==' '){
            after+=i;
            // cout<<(int)i;
        }
    }
    cout<<after;
    return 0;
}