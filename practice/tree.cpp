#include<iostream>
using namespace std;
#include<queue>
#include<stack>

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
Node* build(){
    int data;
    cout<<"enter the data ";
    cin>>data;

    if(data==-1){
        return NULL;
    }
    Node* root = new Node(data);
    cout<<"enter the left part of "<<root->data<<endl;
    root->left=build();
    cout<<"enter the right part of "<<root->data<<endl;
    root->right=build();
    return root;
}
Node* buildLevel(){
    int data;
    cout<<"enter the data "<<endl;
    cin>>data;
    queue<Node*>q;
    Node* root = new Node(data);
    q.push(root);
    while(!q.empty()){
        Node* curr = q.front();
        q.pop();
        int leftData,rightData;
        cout<<"enter the left part of "<<curr->data<<endl;
        cin>>leftData;
        if (leftData != -1) {
            curr->left = new Node(leftData);
            q.push(curr->left);
        }
        cout<<"enter the right part of "<<curr->data<<endl;
        cin>>rightData;
        if(rightData!=-1){
            curr->right=new Node(rightData);
            q.push(curr->right);
        }
        
    }
    return root;
}
void inorder(Node* root){
    if(root==nullptr){
        return;
    }
    inorder(root->left);
    cout<<" "<<root->data<<" ";
    inorder(root->right);
}
void preorder(Node* root){

    if(root==nullptr){
        return;
    }
    cout<<" "<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    
}
void postorder(Node* root){
    if(root==nullptr){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<" "<<root->data<<" ";

}
void levelorder(Node* root){
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }

}
void itInorder(Node* root){
    stack<Node*>st;
    Node* curr=root;
    //currr wala for left
    //st.empty for right traversal
    while(curr != NULL || !st.empty()){

        while(curr!=NULL){
            st.push(curr);
            curr=curr->left;
        }
        curr=st.top();
        cout<<curr->data<<" ";
        st.pop();
        curr=curr->right;
    }
}
void itPreorder(Node* root){
    stack<Node*>st;
    Node* curr=root;
    while(curr!=NULL || !st.empty()){
        while(curr!=NULL){
            st.push(curr);
            cout<<curr->data<<" ";
            curr=curr->left;
        }
        curr=st.top();
        st.pop();
        curr=curr->right;
    }
}
//pending
void itPostorder(Node* root){
    stack<Node*>st;
    Node* curr=root;
    while(curr!=NULL || !st.empty()){
        while(curr!=NULL){
            st.push(curr);
            curr=curr->left;
        }
        curr=st.top();
        st.pop();
        curr=curr->right;
    }
}

int maxDepth(Node* root){
    if(root==NULL){
        return 0;
    }
    int left=maxDepth(root->left);
    int right=maxDepth(root->right);
    return max(left,right)+1;
}
int main(){
    Node* root=nullptr;
    root=buildLevel();
    levelorder(root);
    return 0;
}