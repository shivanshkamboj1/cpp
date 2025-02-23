#include<iostream>
using namespace std;
#include<vector>

int main()
{
    vector<int>v;
    int n=6;
    while(n!=1){
        if(n%2==0){
            v.push_back(n);
            n=n/2;
        }
        else{
            v.push_back(n);
            n = 3 * n + 1;
        }
    }
    for(auto i:v){
        cout<<i<< " ";   }
    return 0;
}