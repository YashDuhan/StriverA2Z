//Exactly similar to vector but performs one extra operation(push_front)
#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> ls = {1,2,3,4,5};
    ls.push_back(6);

    ls.push_front(0); //inserts 0 in beginning

    for(auto i:ls){
        cout << i << " ";
    }
}