#include<iostream>
using namespace std;
#include<vector>

    
int main()
{
    vector<int>a{10,12,20 ,30, 8 ,25};
    vector<string>ans;
    for(auto i:a){
        if(i%3 && i%5){
            ans.push_back("ThreeFive");

        }
        else if(i%3){
            ans.push_back("Three");

        }
        else if(i%5)
            ans.push_back("Five");
        else{
            ans.push_back(to_string(i));
        }
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}