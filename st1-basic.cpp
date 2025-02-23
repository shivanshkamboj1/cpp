#include<iostream>
using namespace std;
    
class Stack{
    public:
    int* arr;
    int top;
    int size;
    Stack(int size){
        arr=new int[size];
        this->size=size;
        this->top=-1;
    }
    void push(int data){
        if(size-top>1){
            top++;
            arr[top]=data;
        }
        else{
            cout<<" stack full";
        }
    }
    void pop(){
        if(top==-1){
            cout<<"already empty";
        }
        else{
            top--;
        }
    }
    int getTop(){
        if(top==-1){
            cout<<"stack is empty";
            return 0;
        }
        else{
            return arr[top];
        }
    }
    int getSize(){
        return top+1;
    }
    bool empty(){
        if(top==-1){
            return true;
        }else return false;
    }
};
int main()
{
    Stack st(5);
    st.pop();

    cout<<st.getTop();
    return 0;
}