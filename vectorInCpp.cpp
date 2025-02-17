#include<iostream>
#include<vector>
using namespace std;

// defining a method to display the vector
template <class T1>
void display(vector<T1> &vec){
    for(int i=0; i<vec.size(); i++){
        cout<<"Element "<<i+1<<": "<<vec[i]<<endl;
    }
}

int main(){
    vector<int> vec1;  // declaration of integer vector of length zero
    int element;

    /* the biggest advantage of using vector is, it manages size on its own
       and vector is resizable */

    for(int i=0; i<4; i++){
        cout<<"Enter the element to add to the vector: ";
        cin>>element;

        vec1.push_back(element);  // storing element in the vector
    }

    // vec1.pop_back();  // removes the last element of the vector

    // display(vec1);
    vector<int> :: iterator iter = vec1.begin();  // 'iter' is pointing towards the 1st element of the vector
    // vector<int> :: reverse_iterator riter = vec1.rbegin(); // to make reverse iterator
    vec1.insert(iter, 44); 

    // -------another way of defining iterator----------------

    auto iter = vec1.begin();  // auto keyword allows compiler to automatically determine the type of 'iter'

    // display(vec1);

    // vec1.assign(7,5);  making seven copy of 5
    // vec1.insert(vec1.begin()+2, 4);  have to use iterator to point
    // vec1.erase(vec1.begin()+1);  again, have to use iterator to point the element
    // swap(vec1, vec2);  used to swap content of two vectors
    // vec1.clear();  wiping everything
    // vec1.emplace(vec1.begin()+1, 23);  adding element at specified position
    // vec1.emplace_back(23); adding element at the last

    return 0;
}