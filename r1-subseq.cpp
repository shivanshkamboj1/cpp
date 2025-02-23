#include<iostream>
using namespace std;
    
void solve(string task,string &output,int start ,int size){
    if(start>=size){
        cout<<output<<endl;
        return;
    }
    output+=task[start];
    solve(task,output,start+1,size);
    output.pop_back();
    solve(task,output,start+1,size);
}
int main()
{
    string task="abc";
    string output="";
    int size = task.length();
    solve(task,output,0,size);
    return 0;
}