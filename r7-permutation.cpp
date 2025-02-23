#include<iostream>
using namespace std;
void permutations(string &s,int i){
    if(i>=s.length()){
        cout<<s<<" ";
        return;
    }
    for(int j=i;j<s.length();j++){
        swap(s[j],s[i]);
        permutations(s,i+1);
        swap(s[j],s[i]);
    }
}
void permutations2(string s,int i){
    if(i>=s.length()){
        cout<<s<<" ";
        return;
    }
    for(int j=i;j<s.length();j++){
        swap(s[j],s[i]);
        permutations(s,i+1);
    }
}
    
int main()
{
    string s="abc";
    int i=0;
    permutations(s,i);
    return 0;
}