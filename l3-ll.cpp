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
Node* reverseUsingLoop(Node* head){
    Node* prev = nullptr;
    Node* curr = head;
    while(curr!=nullptr){
        Node* forward = curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}
Node* reverseUsingRecursion(Node* curr,Node* prev){
    if(curr==nullptr){
        return prev;
    }
    Node* forward=curr->next;
    curr->next=prev;
    prev=curr;
    curr=forward;
    reverseUsingRecursion(curr,prev);
}
int getLength(Node* head){
    int count=0;
    while(head!=nullptr){
        count++;
        head=head->next;
    }
    return count;
}
Node* reverseKgroup(Node* &head,int k){
    if(head==nullptr){
        cout<<"ll is empty";
        return nullptr;
    }
    int len = getLength(head);
    if(k>len){
        cout<<"invalid k";
        return head;
    }
    Node* prev=nullptr;
    Node* curr=head;
    Node* forward = curr->next;
    int count =0;
    while(count<k){
        forward = curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
    }
    if(forward!=nullptr){
        head->next=reverseKgroup(forward,k);
    }
    return prev;
}
int main()
{
    Node* head=nullptr;
    Node* tail = nullptr;
    insertAtHead(head,tail,1);
    insertAtHead(head,tail,2);
    insertAtHead(head,tail,3);
    insertAtHead(head,tail,4);
    // insertAtHead(head,tail,5);
    Node* prev = nullptr;
    // head=reverseUsingLoop(head);
    head=reverseUsingRecursion(head,prev);
    head=reverseKgroup(head,2);
    printLL(head);
    // cout<<findMiddle(head)->data;
    return 0;
}