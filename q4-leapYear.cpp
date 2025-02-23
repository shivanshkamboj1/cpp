#include<iostream>
using namespace std;
    
bool checkLeap(int n){
    if(n%400==0 || ( n%4==0 && n%100!=0)){
        return true;
    }
    return false;
}
int main()
{
    cout<<checkLeap(1900);
    return 0;
}