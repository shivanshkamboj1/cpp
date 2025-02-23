#include<iostream>
using namespace std;
    
    
int main()
{
    string s="shivansh is good objdshlahglh";
    int i=0,j=0;
    string ans;
    while(j<=s.length()){
        if(j < s.length() && s[j]!= ' '){
            j++;
        }
        else{
            if (j - i > ans.length()) {
                ans = s.substr(i, j - i);
            }
            j++;
            i=j;
        }
    }
    cout<<ans;
    return 0;
}