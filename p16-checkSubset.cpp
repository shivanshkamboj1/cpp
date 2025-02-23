#include<iostream>
using namespace std;
#include<unordered_map>

bool isSubset(int arr1[],int m,int arr2[],int n){
    unordered_map<int,bool>mp;
    for(int i=0;i<n;i++){
        mp[arr2[i]]=true;
    }
    for(int i=0;i<m;i++){
        if(mp.find(arr1[i])==mp.end()){
            return false;
        }
    }

    return true;
} 
    
int main()
{
	int arr1[]={1,3,4,5,2};
	int arr2[]={2,4,3,1,7,5,15};
	
	int m= sizeof(arr1)/sizeof(arr1[0]);
	int n= sizeof(arr2)/sizeof(arr2[0]);
	
	bool ans= isSubset(arr1,m,arr2,n);
    cout<<ans;
    return 0;
}