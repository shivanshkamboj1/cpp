#include<iostream>
using namespace std;

class deque{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    deque(int size){
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    void push_front(int data){
        if((rear + 1) % size == front){
            cout<<"queue is full";
            return;
        }
        else if(front==-1){
            front=rear=0;
            arr[front]=data;
        }
        else if(front==0&& rear!=size-1){
            front=size-1;
            arr[front]=data;
        }
        else{
            front--;
        }
    }
    void pop_front(){
        if(front==-1){
            cout<<" queue is empty";
        }
        else if(front==rear){
            front=-1;
            rear=-1;
        }
        else if(front==size-1){
            front=0;
        }
        else{
            front++;
        }
    }
    void push_back(int data){
        if((rear + 1) % size == front){
            cout<<"queue is full";
            return;
        }
        else if(front==-1){
            front=rear=0;
            arr[rear]=data; 
        }
        else if(front!=0&& rear==size-1){
            rear=0;
            arr[rear]=data;
        }
        else{
            rear = (rear + 1) % size;
            arr[rear]=data;
        }
    }
    void pop_back(){
        if(front==-1){
            cout<<" queue is empty";
        }
        else if(front==rear){
            front=-1;
            rear=-1;
        }
        else if(rear==0){
            rear=size-1;
        }
        else{
            rear--;
        }
    }
};
int main()
{
    
    return 0;
}