#include<iostream>
using namespace std;

class Complex{
    int real, img;

    public:
        void setData(int a, int b);
        void getData(void);
};

void Complex :: setData(int a, int b){
    real = a;
    img = b;
}

void Complex :: getData(void){
    cout<<"Number is "<<real<<" + "<<img<<"i"<<endl;
}

int main(){
    // Complex c1;               1st method (with creating object)
    // Complex (*ptr1) = &c1;

    // can do either way

    Complex (*ptr1) = new Complex;   // 2nd method (without creating any other objects)
 
    (*ptr1).setData(2,3);  // brackett is important as precedence of '.' operator is higher than *
    (*ptr1).getData();

    // another method for dereferncing the pointer with arrow operator

    ptr1->getData();  // does same thing as above

    // ----------------------------------------------------------------------
    // --------------making array of objects using pointers------------------
    // ----------------------------------------------------------------------

    Complex (*ptr2) = new Complex[3];  // making 3 objects

    return 0;
}