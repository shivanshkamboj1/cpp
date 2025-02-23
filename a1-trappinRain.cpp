#include<iostream>
using namespace std;
#include<vector>
    int trap(vector<int>& height) {
        int n=height.size();
        int* left=new int[n];
        int* right=new int[n];
        left[0]=height[0];
        cout<<left[0]<<" ";
        for(int i=1;i<n;i++){
            left[i]=max(left[i-1],height[i]);
            cout<<left[i]<<" ";
        }
        cout<<endl;
        right[n-1]=height[n-1];
        cout<<right[n-1]<<" ";
        for(int i=n-2;i>=0;i--){
            right[i]=max(right[i+1],height[i]);
            cout<<right[i]<<" ";
        }
        // for(int i=1;i<n;i++){
        //     cout<<right[i]<<" ";
        // }
        cout<<endl;
        int ans=0;
        int temp=0;
        for(int i=0;i<n;i++){
            temp=min(left[i],right[i])-height[i];
            cout<<temp<<" ";
            ans+=temp;

        }
        delete[] left;
        delete[] right;
        return ans;
    }  
    
int main()
{
    vector<int> height={0,1,0,2,1,0,1,3,2,1,2,1};
    int ans = trap(height);
    cout<<endl<<ans;
    return 0;
}