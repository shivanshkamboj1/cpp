#include<iostream>
using namespace std;
#include<queue>
class Stack{
    private:
    queue<int>q1,q2;
    public:
    void push(int data){
        q1.push(data);
    }
    void pop(){
        if(q1.empty()&&q2.empty())return;
        while(!q1.size()==1){
            q2.push(q1.front());
            q1.pop();
        }
        int ele=q1.front();
        q1.pop();
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }
    int top(){
        if(q1.empty()&&q2.empty())return -1;
        while(!q1.size()==1){
            q2.push(q1.front());
            q1.pop();
        }
        int ele=q1.front();
        q2.push(ele);
        q1.pop();
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }
};
int main()
{
    
    return 0;
}