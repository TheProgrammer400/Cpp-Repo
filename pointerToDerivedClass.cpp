#include<iostream>
using namespace std;

class Parent{
    public:
        int varParent = 10;

        void display(){
            cout<<"The value of parent variable is "<<varParent<<endl;
        }
};

class Child : public Parent{
    public:
        int varChild = 100;

        void display(){
            cout<<"The value of child variable is "<<varChild<<endl;
        }
};

int main(){
    Parent *ptr1;
    Child c1;

    ptr1 = &c1;
    ptr1->display();
    return 0;
}