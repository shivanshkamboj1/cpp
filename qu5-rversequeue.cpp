#include<iostream>
using namespace std;
#include<stack>
#include<queue>
void reverseByIteration(queue<int>&q){
    stack<int>st;
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }

} 
void reverseByRecursion(queue<int>&q){
    if(q.empty()){
        return;
    }
    int front = q.front();
    q.pop();
    reverseByRecursion(q);
    q.push(front);
}
void printQueue(queue<int>q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl<<"queue printed succesfully";
}
void reverseKelements(queue<int>&q,int k){
    int count=0;
    int size=q.size();
    if(k>=size){
        cout<<"already reversed"<<endl;
        return;
    }
    stack<int>st;
    while(!q.empty()){
        count++;
        st.push(q.front());
        q.pop();
        if(count==k)break;
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    count=0;
    while(!q.empty()){
        count++;
        int ele=q.front();
        q.pop();
        q.push(ele);
        if(count==size-k)break;
    }
}
void reverseKbyRecursion(queue<int>&q,int k){
    if (k <= 0 || q.empty()) return;  // Base case: stop when k reaches 0

    int frontElement = q.front();  // Remove front element
    q.pop();

    reverseKbyRecursion(q, k - 1);  // Recursive call for remaining k-1 elements

    q.push(frontElement); 
}
int main()
{
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    int k=3;
    reverseKbyRecursion(q,k);
    printQueue(q);
    return 0;
}