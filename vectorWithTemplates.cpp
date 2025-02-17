#include<iostream>
#include<vector>
using namespace std;

template<class T>
class Vector{
    vector<T> vec;
    int size;

    public:
        Vector(){
            /* have to make default constructor so that i can create a
               vector without giving any argument in operator+ overloading function */
        }

        Vector(int size){
            this->size = size;

            setValues();
        }

        void setValues(){
            for(int i=0; i<size; i++){
                T element;
                cout<<"Enter the element "<<i+1<<": ";
                cin>>element;

                vec.push_back(element);
            }
        }

        void display(){
            cout<<"Provided vector:"<<endl;

            typename vector<T> :: iterator iter;
            for(iter = vec.begin(); iter != vec.end(); iter++){
                cout<<(*iter)<<endl;
            }
        }

        template<class T1>
        friend Vector<T1> operator+(Vector<T1> &vec1, Vector<T1> &vec2);
};

template<class T1>
Vector<T1> operator+(Vector<T1> &vec1, Vector<T1> &vec2){
    Vector<T1> vec3;

    typename vector<T1> :: iterator itr1;
    typename vector<T1> :: iterator itr2;

    itr2 = vec2.vec.begin();

    for(itr1 = vec1.vec.begin(); itr1 != vec1.vec.end(); itr1++){
        T1 element;
        element = (*itr1) + (*itr2);
        vec3.vec.push_back(element);
        itr2++;
    }

    return vec3;
}

int main(){
    Vector<int> v1(3);
    Vector<int> v2(3);
    Vector<int> v3 = v1+v2;
    v3.display();
    return 0;
}