#include<iostream>
using namespace std;
#include<stack>  
void printMiddle(stack<int>&s,int mid){
    if(s.size()==mid){
        cout<<s.top();
        return;
    }
    int top=s.top();
    s.pop();
    printMiddle(s,mid);
    s.push(top);
}
int main()
{
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    int size = s.size();
    int mid = size/2 +1;
    printMiddle(s,mid);
    return 0;
}