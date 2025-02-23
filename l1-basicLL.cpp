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
void insertAtTail(Node* &head,Node* &tail,int data){
    Node* newNode = new Node(data);
    if (head==nullptr) {
        head=newNode;
        tail=newNode;
    }
    else{
        tail->next=newNode;
        tail=newNode;
    }
}
int getLength(Node* head){
    int count=0;
    while(head!=nullptr){
        count++;
        head=head->next;
    }
    return count;
}
void insertAtPos(Node* &head,Node* &tail,int data,int pos){
    if(head==nullptr){
        insertAtHead(head,tail,data);
    }
    int len = getLength(head);
    if(pos>len){
        insertAtTail(head,tail,data);
    }
    int currPos=1;
    Node* prev=head;
    while(currPos<pos){
        prev=head->next;
        currPos++;
    }
    Node* curr=prev->next;
    Node* newNode=new Node(data);
    newNode->next=curr;
    prev->next=newNode;
}
void deleteAtPos(Node* &head,Node* &tail,int pos){
    int len= getLength(head);
    if(pos>len){
        cout<<"cannot delete ";
        return;
    }
    if(len==1){
        delete head;
        head=nullptr;
        tail=nullptr;
        return;
    }
    if(pos==1){
        Node* temp = head;
        head=head->next;
        delete temp;
        return;
    }
    if(pos==len){
        Node* temp =head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=nullptr;
        delete tail;
        tail=temp;
        return;
    }

    int i=1;
    Node* prev=head;
    while(i<pos-1){
        prev=prev->next;
        i++;
    }
    Node* curr=prev->next;
    prev->next=curr->next;
    delete curr;
}
int main()
{
    Node* head= nullptr;
    Node* tail= nullptr;
    insertAtHead(head,tail,4);
    insertAtHead(head,tail,3);
    insertAtHead(head,tail,2);
    insertAtHead(head,tail,1);
    insertAtTail(head,tail,1);
    insertAtTail(head,tail,5);
    insertAtTail(head,tail,6);
    insertAtPos(head,tail,66,3);
    printLL(head);
    deleteAtPos(head,tail,3);
    printLL(head);
    // cout<<getLength(head);
    return 0;
}