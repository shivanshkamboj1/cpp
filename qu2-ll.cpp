#include<iostream>
using namespace std;
//single linked list

class Node{
    private:
    int data;
    Node* next;
    Node(){
        this->data=0;
        this->next=nullptr;
    }
    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
    friend class Queue1;
};
class Queue1{
    private:
    Node* front ;
    Node* rear ;
    public:
    Queue1(){
        this->front=nullptr;
        this->rear=nullptr;
    }
    void push(int data){
        Node* newNode = new Node(data);
        if(rear==nullptr){
            front=rear=newNode;
        }
        else{
            rear->next=newNode;
            rear=newNode;
        }
    }
    void pop(){
        if(rear==nullptr){
            cout<<"queue is empty";
            return;
        }
        else{
            Node* temp = front;
            front=front->next;
            if(front==nullptr)rear=nullptr;
            delete temp;
        }
    }
    bool empty(){
        if(rear==nullptr && front==nullptr){
            return true;
        }
        else{
            return false;
        }
    }
    int getfront(){
        if(front==nullptr){
            cout<<"queue is empty";
            return -1;
        }
        else{
            return front->data;
        }
    }
};
    
int main(){
    Queue1 queue;
    queue.push(1);
    queue.push(2);
    queue.push(3);
    queue.push(4);
    while(!queue.empty()){
        cout<<queue.getfront();
        queue.pop();
    }
    return 0;
}