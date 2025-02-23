#include<iostream>
using namespace std;
    
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(){
        this->data=0;
        this->prev=nullptr;
        this->next=nullptr;
    }
    Node(int data){
        this->data=data;
        this->prev=nullptr;
        this->next=nullptr;
    }
};

void insertAtHead(Node* &head,Node* &tail,int data){
    if(head==nullptr){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;

    }
    else{
        Node* newNode=new Node(data);
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }
}
void insertAtTail(Node* &head,Node* &tail,int data){
    if(head==nullptr){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;

    }
    else{
        Node* newNode=new Node(data);
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    }
}

void printStart(Node* head,Node* tail){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
}
void printEnd(Node* head,Node* tail){

    while(tail!=nullptr){
        cout<<tail->data<<" ";
        tail=tail->prev;
    }
}

int getLengthPrev(Node* tail){
    int count =0;
    while(tail){
        count++;
        tail=tail->prev;

    }
    return count;
}
int getLengthStart(Node* head){
    int count =0;
    while(head){
        count++;
        head=head->next;

    }
    return count;
}

void insertAtPosStart(Node* &head,Node* &tail,int pos,int data){
    if(head==nullptr){
        insertAtHead(head,tail,data);
        return;
    }
    int len = getLengthStart(head);
    if(pos>len){
        insertAtTail(head,tail,data);
        return;
    }
    Node* curr=head;
    int i=1;
    while(i<pos){
        curr=curr->next;
        i++;
    }
    Node* last=curr->prev;
    Node* newNode= new Node(data);
    last->next=newNode;
    newNode->prev=last;
    newNode->next=curr;
    curr->prev=newNode;
}

void deleteAtPosStart(Node* &head,Node* &tail,int pos){
    if(pos==1){
        Node* curr=head;
        head=head->next;
        delete curr;
        return;
    }
    int len=getLengthStart(head);
    if(pos>len){
        Node* last=tail;
        tail=tail->prev;
        delete last;
        return;
    }
    int i=1;
    Node*curr=head;
    while(i<pos){
        curr=curr->next;
        i++;
    }
    Node* prevNode=curr->prev;
    Node* nextNode=curr->next;

    prevNode->next=nextNode;
    nextNode->prev=prevNode;
    delete curr;
}
int main()
{
    Node* head =nullptr;
    Node* tail =nullptr;
    insertAtHead(head,tail,1);
    insertAtHead(head,tail,2);
    insertAtHead(head,tail,3);
    insertAtHead(head,tail,4);
    insertAtHead(head,tail,5);
    insertAtHead(head,tail,6);
    insertAtHead(head,tail,7);
    // insertAtTail(head,tail,70);
    // insertAtTail(head,tail,71);
    // printEnd(head,tail);
    // cout<<getLength(tail);
    insertAtPosStart(head,tail,3,35);
    deleteAtPosStart(head,tail,3);
    printStart(head,tail);

    return 0;
}