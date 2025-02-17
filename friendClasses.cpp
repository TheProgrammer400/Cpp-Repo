#include<iostream>
using namespace std;

class Person{
    string name;
    int age;

    public:
        Person(string name, int age){
            this->name = name;
            this->age = age;
        }

        friend class AadharCard;
};

class AadharCard{
    public:
        void display(Person pers){
            cout<<"The name of the person: "<<pers.name<<endl;
            cout<<"The age of the person: "<<pers.age<<endl;
        }
};

int main(){
    Person p1("Hello", 34);
    AadharCard a1;

    a1.display(p1);

    return 0;
}