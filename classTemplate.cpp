#include<iostream>
#include<cstdlib>
using namespace std;

/* 
for any object, class is a template
templates --> parameterized classes

why use templates?
    --> DRY principle
    --> generic programming
*/

template <class Custom>
class Vector{
    public:
        int size;
        Custom *arr;

        Vector(int n){
            size = n;
            arr = new Custom[size];
        }

        Custom getDotProduct(Vector v1){
            Custom answer = 0;
            for(int i=0; i<size; i++){
                answer = answer + arr[i] * v1.arr[i];
            }

            return answer;
        }
};

int main(){

    Vector <float>vec1(3);
    Vector <float>vec2(3);

    // vec1.arr[0] = 1.23;
    // vec1.arr[1] = 2.565;
    // vec1.arr[2] = 3.89;

    // vec2.arr[0] = 4.45;
    // vec2.arr[1] = 5.787;
    // vec2.arr[2] = 6.12;

    for(int i=0; i<3; i++){
        vec1.arr[i] = (float) i + 0.2;
        vec2.arr[i] = (float) i + 3 + 0.23;
    }

    cout<<vec1.getDotProduct(vec2);
    return 0;
}