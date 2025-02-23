#include<iostream>
using namespace std;
#include<stack>
class Queue{
    private:
    stack<int>s1,s2;
    public:
    
    void push(int data){
        s1.push(data);
    }
    void pop(){
        if(s1.empty()&&s2.empty()){
            cout<<"queue is empty";
            return;
        }
        int ele=-1;
        while(!s1.empty()){
            ele=s1.top();
            s2.push(ele);
            s1.pop();
        }
        s2.pop();
        while(!s2.empty()){
            ele=s2.top();
            s1.push(ele);
            s2.pop();
        }
    }
    int top(){
        if(s1.empty()&&s2.empty()){
            cout<<"queue is empty";
        }
        int ele=-1;
        while(!s1.empty()){
            ele=s1.top();
            s1.pop();
            s2.push(ele);
        }
        cout<<"top element is "<<ele;
        while(!s2.empty()){
            ele=s2.top();
            s1.push(ele);
            s2.pop();
        }
        return ele;
    }
    void printQueue(){
        if(s1.empty()&&s2.empty()){
            cout<<"queue is empty";
        }
        int ele=-1;
        while(!s1.empty()){
            ele=s1.top();
            s2.push(ele);
            s1.pop();
        }
        while(!s2.empty()){
            ele=s2.top();
            cout<<ele<<endl;
            s1.push(ele);
            s2.pop();
        }
    }
};

int main()
{
    
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop();
    q.printQueue();
    return 0;
}