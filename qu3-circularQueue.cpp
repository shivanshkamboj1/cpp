#include<iostream>
using namespace std;
class cirQueue{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    cirQueue(int size){
        arr= new int[size];
        this->size=size;
        front =-1;
        rear=-1;
    }
    void push(int data){
        //queue full
        //single element
        //circular nature
        //normal flow
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
    void pop(){
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
    bool isEmpty(){
        return front == -1;
    }
    int top(){
        if (front == -1) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[front];
    }
};
    
int main()
{
    
    return 0;
}