#include<iostream>
#include<stack>
#include<algorithm>
#include<cctype>
using namespace std;
int main()
{
    stack<string>st;
    string s="3[a]2[bc]";
    for(auto i:s){
        if(i==']'){
            string toRepeat="";
            while(!st.empty() && st.top() != "["){
                toRepeat = st.top() + toRepeat; // Prepend to maintain correct order
                st.pop();
            }
            st.pop(); // Remove '['
            string number="";
            while(!st.empty() && isdigit(st.top()[0])){
                number = st.top() + number; // Prepend digits to form the correct number
                st.pop();
            }
            int n = stoi(number);
            string decode="";
            while(n--){
                decode += toRepeat;
            }
            st.push(decode);
        }
        else{
            string temp(1, i);
            st.push(temp);
        }
    }
    string ans = "";
    while(!st.empty()){
        ans = st.top() + ans; // Prepend to maintain the correct order
        st.pop();
    }
    cout << ans << " ji"; // Add " ji" as per the original request
    return 0;
}
