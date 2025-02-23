#include<iostream>
using namespace std;
int main(){
    int arr[]={3,2,6,4,8,6,9,5,4,3};
    int size = sizeof(arr)/sizeof(int);
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}