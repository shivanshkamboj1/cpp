#include<iostream>
using namespace std;
    
class Queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    Queue(int size){
        this->size=size;
        arr= new int[size];
        front=0;
        rear=0;
    }
    void push(int data){
        if(rear==size){
            cout<<"queue is full";
        }
        arr[rear]=data;
        rear++;
    }
    void pop(){
        if(front==rear){
            cout<<"queue is empty";
        }
        else{
            arr[front]=-1;
            front++;
            if(front==rear)front=rear=0;
        }
    }
    int getFront(){
        if(front==rear){
            cout<<"queue is empty";
            return -1;
        }
        else{
            return arr[front];
        }
    }
    bool isempty(){
        if(rear==front)return true;
        else return false;
    }
    int getSize(){
        return rear-front;
    }
};
int main()
{
    Queue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.push(6);
    cout<<q.getSize();
    return 0;
}