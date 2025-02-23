#include<iostream>
using namespace std;
#include<unordered_set>
class Node{
    public:
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
};
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

bool isCircular(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        temp=temp->next;
        if(temp==head)return true;
    }
    return false;
}
bool detectLoopSet(Node* head){
    unordered_set<Node*>mp;
    while(head!=nullptr){
        if(mp.find(head)!=mp.end()){
            return true;
        }
        mp.insert(head);
        head=head->next;
    }
    return false;
}
Node* detectLoop(Node* head){
    Node* slow=head;
    Node* fast = head;
    while(fast!=nullptr){
        fast=fast->next;
        if(fast!=nullptr){
            fast=fast->next;
            slow=slow->next;
        }
        if(slow==fast){
            slow=head;
            while(slow!=fast){
                slow=slow->next;
                fast=fast->next;
            };
            return slow;
        }
        
    }

    return nullptr;
}
void removeLoop(Node* head){
    Node* slow=head;
    Node* fast = head;
    while(fast!=nullptr){
        fast=fast->next;
        if(fast!=nullptr){
            fast=fast->next;
            slow=slow->next;
        }
        if(slow==fast){
            slow=head;
            Node* temp=fast;
            while(slow!=fast){
                temp=fast;
                slow=slow->next;
                fast=fast->next;
            };
            temp->next=nullptr;
            // cout<<"loop fixed";
            return;
        }
        
    }

    cout<<"no loop found";
    return;
}
void printLL(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node* first = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* forth = new Node(4);
    Node* fifth = new Node(5);
    Node* sixth = new Node(6);
    Node* seven = new Node(7);
    Node* eight = new Node(8);
    first->next=second;
    second->next=third;
    third->next=forth;
    forth->next=fifth;
    fifth->next=sixth;
    sixth->next=seven;
    seven->next=eight;
    eight->next=forth;
    Node* head=nullptr;
    // head=detectLoop(first);
    // if(head==nullptr)cout<<"loop not foyund";
    removeLoop(first);
    printLL(first);
    return 0;
}