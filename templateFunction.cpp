#include<iostream>
using namespace std;

template <class T>

void Swapp(T &n1, T &n2){
    T temp = n1;
    n1 = n2;
    n2 = temp;
}

int main(){
    int x = 1, y = 2;

    cout<<"After swap: ";
    Swapp(x,y);
    cout<<x<<" "<<y<<endl;

    return 0;
}