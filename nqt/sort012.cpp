#include<iostream>
using namespace std;
#include<vector>

    
int main()
{
    vector<int>v{0,2,1,0,2,2,1,1,1,0,0};
    int start=0;
    int end=v.size()-1;
    int point=0;
    while(point<=end){
        if(v[point]==0){
            swap(v[start],v[point]);
            start++;
            point++;
        }
        else if(v[point]==2){
            swap(v[point],v[end]);
            end--;

        }
        else{
            point++;
        }
    }
    for(auto i:v){
        cout<<i<< " ";
    }
    return 0;
}