#include<iostream>
using namespace std;


class Animal{
    public:
    int age;
    string name;
    void show(){
        cout<<"parent show";
    }
};
class bili:public Animal{
    public:
    void show(){
        cout<<"child show";
    }

};
int main()
{
    bili b;
    b.show();
    return 0;
}