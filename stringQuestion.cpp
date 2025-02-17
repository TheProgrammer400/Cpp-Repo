#include<iostream>
using namespace std;

class String{
    string word;

    public:
        String(string word){
            this->word = word;
        }

        friend String operator+(String& str1, String& str2);
        friend void operator<<(ostream& COUT, String& str);
};

String operator+(String& str1, String& str2){
    return str1.word + str2.word;
}

void operator<<(ostream& COUT, String& str){
    cout<<str.word<<endl;
}

int main(){
    String s1 = String("hello");
    String s2 = String("world");
    String s3 = s1+s2;
    cout<<s3;

    return 0;
}