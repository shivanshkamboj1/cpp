#include<iostream>
using namespace std;
    
    
int main()
{
    int n = 5;
    int arr[][2] = {{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}}; 
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i][0]==arr[j][1] && arr[i][1]==arr[j][0]){
                cout << "(" << arr[i][1] << " " << arr[i][0] << ")" << " ";
            }
        }
    }
    return 0;
}