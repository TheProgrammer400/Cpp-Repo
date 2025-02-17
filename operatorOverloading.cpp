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

        // friend void operator<<(ostream& COUT, Person& pers);
        friend ostream& operator<<(ostream& COUT, Person& pers);
        friend void operator+(Person& pers1, Person& pers2);
};

// following function will only work for print one info at a time

// void operator<<(ostream& COUT, Person& pers){
//     cout<<"Name: "<<pers.name<<endl;
//     cout<<"Age: "<<pers.age<<endl;
// }

// but by defining following function, we'll be able to multiple info at a time

ostream& operator<<(ostream& COUT, Person& pers){
    cout<<"Name: "<<pers.name<<endl;
    cout<<"Age: "<<pers.age<<endl;
    return COUT;
}

void operator+(Person& pers1, Person& pers2){
    cout<<"Total sum of ages: "<<pers1.age + pers2.age<<endl;
}

int main(){
    Person p1 = Person("Hello", 23);
    Person p2 = Person("World", 10);
    cout<<p1<<p2;
    p1+p2;  // adding ages

    return 0;
}