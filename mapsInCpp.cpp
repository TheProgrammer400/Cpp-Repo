#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string, int> marks;
    marks["world"] = 20;
    marks["Hello"] = 30;

    // important thing to note that, maps are ordered in lexicographical order
    // and that's why while printing all the keys and values, it prints 'hello' first

    // if you want to avoid this then, write this
    // #include<unordered_map>

    map<string, int> :: iterator iter;

    // inserting element

    marks.insert({{"Programming", 60}, {"Python", 70}});

    // for(iter = marks.begin(); iter!=marks.end(); iter++){
    //     cout<<(*iter).first<<"->"<<(*iter).second<<endl;;
    // }

    // can be done like this also

    for(auto pair : marks){
        cout<<pair.first<<"-"<<pair.second<<endl;
    }

    return 0;
}