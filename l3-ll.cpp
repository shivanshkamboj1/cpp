#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(){
        this->data=0;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void printLL(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void insertAtHead(Node* &head,Node* &tail,int data){
    Node* newNode = new Node(data);
    if(head==nullptr){
        head=newNode;
        tail=newNode;
    }
    else{
        newNode->next=head;
        head=newNode;
    }
}  
    



Node* findMiddle(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(fast!=nullptr&&fast->next!=nullptr){
        fast=fast->next;
        if(fast!=nullptr){
            fast=fast->next;
            slow=slow->next;
        }
    }
    return slow;
}    
int main()
{
    Node* head=nullptr;
    Node* tail = nullptr;
    insertAtHead(head,tail,1);
    insertAtHead(head,tail,2);
    insertAtHead(head,tail,3);
    insertAtHead(head,tail,4);
    insertAtHead(head,tail,5);
    printLL(head);
    cout<<findMiddle(head)->data;
    return 0;
}