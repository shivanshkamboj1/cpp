#include<iostream>
using namespace std;
#include<vector>

    
int main()
{
    vector<int>v{1,2,3,3,3,4,4,4,4,5,5,5};
    int majorityEle=0;
    int majorityCount =0;
    for(auto i:v){
        if(majorityCount ==0){
            majorityEle=i;
            majorityCount ++;
        }
        else if(majorityEle==i){
            majorityCount ++;
        }
        else{
            majorityCount --;
        }
    }
    cout<<"elememt is "<<majorityEle;
    return 0;
}