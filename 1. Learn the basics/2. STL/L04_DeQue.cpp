//Similar to list and vectors

#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int> dq = {1,2,3};
    dq.push_back(4);
    dq.push_front(0);

    //print
    for(auto i:dq){
        cout << i << " ";
    }

    cout << endl;
    //front and back
    cout << "Front is : " << dq.front() << endl;
    cout << "Back is  : " << dq.back() << endl;
}