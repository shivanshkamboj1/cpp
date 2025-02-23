#include<iostream>
using namespace std;
int main()
{
    //smallest first
    int arr[]={3,2,6,4,8,6,9,5,4,3};
    int size = sizeof(arr)/sizeof(int);
    for(int i=0;i<size-1;i++){
        //smallest element index
        int index=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[index]){
                //update smallest element
                index=j;
            }
        }
        //sawp with smallest
        swap(arr[i],arr[index]);
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}