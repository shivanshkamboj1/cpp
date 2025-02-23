#include<iostream>
#include <algorithm>
#include <cmath>
using namespace std;
void reverseNum(int &n){
    int x=0;
    while(n){
        int last = n%10;
        x=x*10+last;
        n=n/10;
    }
    n=x;
} 
void binary(int &n){
    int x=0;
    while(n){
        int last = n%2;
        x=x*10+last;
        n=n/2;
    }
    n=x;
}
string binary2(int n){
    int x=0;
    string s;
    while(n){
        int last = n%2;
        s+=last+'0';
        n=n/2;
    }
    return s;

}
int binaryToDecimal(string s){
    int j=s.length();
    int ans=0;
    for (int i = 0; i < j; i++)
    {
        int num=s[i]-'0';
        // ans+=num*(pow(2,j-i-1));
        ans+=num*((1<<j-i-1));
    }
    
    return ans;
}
int main()
{
    // cout<<"enter number for binary"<<endl;
    // int a=2;
    // a=a<<1;
    // // cin>>a;
    // string s = binary2(a);
    // reverse(s.begin(),s.end());
    // cout<<s;
    string s="0010";
    int n=545684;
    reverseNum(n);
    cout<<n;
    cout<<binaryToDecimal(s);
    return 0;
}