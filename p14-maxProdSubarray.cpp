#include<iostream>
using namespace std;
#include<vector>

int betterApproach(vector<int>& nums){
    int n=nums.size();
    int maxiSub=nums[0];
    for(int i=0;i<n;i++){
        int innerSub=nums[i];
        for(int j=i+1;j<n;j++){
            innerSub*=nums[j];
            maxiSub=max(maxiSub,innerSub);
        }
    }
    return maxiSub;
}
    
int main()
{
    vector<int> nums = {1,2,21,-3,0,-4,-5};
    cout<<betterApproach(nums);
    return 0;
}