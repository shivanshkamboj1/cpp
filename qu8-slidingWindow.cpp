#include<iostream>
using namespace std;
#include<queue>
#include<vector>


void solve(vector<int>v,int n,int k,vector<int>&ans){
    queue<int>q;
    for(int i=0;i<k;i++){
        if(v[i]<0){
            q.push(i);
        }
    }
    for(int i=k;i<n;i++){
        if(q.empty())ans.push_back(0);
        else ans.push_back(v[q.front()]);


        //out of windwo delete
        while((!q.empty())&&(i-q.front()>=k)){
            q.pop();
        }
        //add bi klrna
        if(v[i]<0)q.push(i);

    }
        //last window ko process kr
        if(q.empty())ans.push_back(0);
        else ans.push_back(v[q.front()]);
     
}
int main()
{
    vector<int>v={1,-3,-5,4,5,4,-7,4,-9,5,34,6};
    vector<int>ans;
    int n=v.size();
    int k=3;
    solve(v,n,k,ans);
    for(auto i:ans){
        cout<<i<< " ";
    }
    return 0;
}