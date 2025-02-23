#include<iostream>
using namespace std;
#include<vector>
#include<limits.h>
//total ways find
int solve1ByRef(vector<int>arr,int target,int &output){
    if(target==0){
        output++;
        return 0;
    }
    if(target<0)return INT_MAX;
    for(int i=0;i<arr.size();i++){
        solve1ByRef(arr,target-arr[i],output);
    }
}
int solve1ByVal(vector<int>arr,int target,int output){
    if(target==0){
        ++output;
        return output;
    }
    if(target<0)return INT_MAX;
    int temp=INT_MAX;
    for(int i=0;i<arr.size();i++){
        temp=solve1ByVal(arr,target-arr[i],output);
        if(temp!=INT_MAX)output=temp;
    }
    return output;
}

//max segment
int solveByBabbar(int target,int x,int y,int z){
    if(target==0)return 0;
    if(target<0)return INT_MAX;

    int ans1=solveByBabbar(target-x,x,y,z)+1;
    int ans2=solveByBabbar(target-y,x,y,z)+1;
    int ans3=solveByBabbar(target-z,x,y,z)+1;
    int final = max(ans1,(ans2,ans3));
    return final;
}
int main()
{
    vector<int>arr{2,1,1};
    int target=4;
    // int output=0;
    // solve1ByRef(arr,target,output);
    // cout<<output;
    cout<<solve1ByVal(arr,target,0);
    cout<<endl;
    cout<<solveByBabbar(target,2,1,1);
    return 0;
}