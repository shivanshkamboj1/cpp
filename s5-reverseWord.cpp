#include<iostream>
using namespace std;
    
    
int main()
{
    string s="  shivansh is my good boy";
    string after="";
    int i=s.length()-1;
    int j=i;
    while (i >= 0) {
        if (s[i] == ' ') {
            after += s.substr(i + 1, j - i);
            after += ' ';
            j = i - 1;
        }
        i--;
    }
    after += s.substr(i + 1, j - i);
    cout<<after;
    return 0;
}