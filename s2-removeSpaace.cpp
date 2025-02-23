#include<iostream>
using namespace std;
    
    
int main()
{
    string s="shivansh is good boy";
    string after;
    for(auto i:s){
        if(i==' '){
            continue;
        }
        else{
            after+=i;
        }
    }
    cout<<after;
    return 0;
}