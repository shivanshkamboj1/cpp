#include<iostream>
using namespace std;
    
bool checkVowel(char s){
    return s=='a'||s=='e'||s=='i'||s=='o'||s=='u';
}
int main()
{
    string s="shivanaaaioiioiosh";
    string after;
    for(int i=0;i<s.length();i++){
        if(checkVowel(s[i])){
            s=s.substr(0,i)+s.substr(i+1,s.length());
            i--;
        }
    }
    cout<<s;
    return 0;
}