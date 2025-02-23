#include<iostream>
using namespace std;
int lcmFind(int a,int b){
    int gcd=1;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0&&b%i==0){
            gcd=i;
        }
    }
    int ans = (a*b)/gcd;
    return ans;
} 
int hcfFind(int a,int b){
    int gcd=1;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0&&b%i==0){
            gcd=i;
        }
    }
    return gcd;
}
void simplify(int &a,int &b){
    int gcd=hcfFind(a,b);
    a=a/gcd;
    b=b/gcd;
}
int main()
{
    int num1=2,den1=8,num2=4,den2=8;
    int lcm=lcmFind(den1,den2);
    int f1=num1*(lcm/den1)+num2*(lcm/den2);
    simplify(f1,lcm);
    cout<<f1<<endl;
    cout<<lcm;
    return 0;
}