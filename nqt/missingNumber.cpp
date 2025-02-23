#include<iostream>
using namespace std;
#include<vector>

    
int main()
{
    vector<int>v{1,2,3,5,6};
    int missing=-1;
    for(int i=0;i<v.size();i++){
        if(v[i]!=i+1){
            missing=i+1;
            break;
        }
    }cout<<missing;
    return 0;
}