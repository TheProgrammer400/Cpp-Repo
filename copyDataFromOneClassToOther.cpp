#include<iostream>
using namespace std;

int option; // creating global variable for gender selection

class Person{
    protected:
        string name;
        int age;
        int choice;

    public:
        Person(){
            setData();
        }

        void setData(){
            cout<<"Enter the name of the person: ";
            cin>>name;

            cout<<"Enter the age of the person: ";
            cin>>age;

            cout<<"Enter the gender: ";
            cin>>choice;

            option = choice;
        }
};

class Male: protected Person{
    string gender = "male";

    public:
        Male(Person other) : Person(other){
            getData();
        }

        void getData(){
            cout<<"The name of the person: "<<name<<endl;
            cout<<"The age of the person: "<<age<<endl;
            cout<<"The person is a "<<gender<<endl;
        }
};

class Female : protected Person{
    string gender = "female";

    public:
        Female(Person other) : Person(other){
            getData();
        }

        void getData(){
            cout<<"The name of the person: "<<name<<endl;
            cout<<"The age of the person: "<<age<<endl;
            cout<<"The person is a "<<gender<<endl;
        }
};

int main(){
    Person p1;

    if (option == 1){
        Male m1(p1);
    } else if (option == 2){
        Female f1(p1);
    } else {
        cout<<"Nah, you're mentally ill"<<endl;
    }
    
    return 0;
}
