#include<iostream>
using namespace std;
class Stack{
    public:
    int *arr;
    int size;
    int top1;
    int top2;
    Stack(int size){
        arr=new int[size];
        this->size=size;
        top1=-1;
        top2=size;
    }
    void push(int data){
        if(top2-top1>1){
            top1++;
            arr[top1]=data;
        }
        else{
            cout<<"array is full";
        }
    }

    void push2(int data){
        if(top2-top1>1){
            top2--;
            arr[top2]=data;
        }
    }
    void pop(){
        if(top1!=-1){
            top1--;
        }
        else{
            cout<<"this side is empty";
        }
    }
    void pop2(){
        if(top2!=size){
            top2++;
        }
        else{
            cout<<"this side is empty";
        }

    }
    int getTop1(){
        if(top1==-1){
            cout<<"stack is empty";
            return 0;
        }
        else{
            return arr[top1];
        }
    }
    int getTop2(){
        if(top2==size){
            cout<<"stack is empty";
            return 0;
        }
        else{
            return arr[top2];
        }

    }
    int getSize1(){
        return top1+1;
    }
    int getSize2(){
        return size-top2;
    }
    int totalSize(){
        return top1+1+size-top2;
    }
    bool empty1(){
        if(top1==-1)return true;
        else return false;
    }
    bool empty2(){
        if(top2==size)return true;
        else return false;
    }
};
    
int main()
{
    
    return 0;
}