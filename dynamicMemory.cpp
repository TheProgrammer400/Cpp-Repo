#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. of elements of the array: ";
    cin>>n;

    int *ptr = new int[n];

    for(int i=0; i<n; i++){
        cout<<"Enter the element "<<i+1<<": ";
        cin>>ptr[i];
    }

    cout<<"Provided array is: ";

    // before deletion
    
    for(int i=0; i<n; i++){
        cout<<ptr[i]<<endl;
    }

    // after deletion

    delete [] ptr;

    for(int i=0; i<n; i++){
        cout<<ptr[i]<<endl;
    }

    return 0;
}