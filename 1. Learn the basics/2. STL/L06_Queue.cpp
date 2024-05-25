#include <iostream>
#include <queue>
using namespace std;

int main(){
    //It uses FIFO approach
    queue<int> q;
    q.push(10); // [10]
    q.push(20); // [10,20]
    q.push(30); // [10,20,30]
    q.push(40); // [10,20,30,40]
    q.emplace(50); // [10,20,30,40,50]

    cout << "The last element is " << q.back() << endl;

    cout << "The first element is " << q.front() << endl;

    cout << "The size is " << q.size() << endl;

    q.pop();

    cout << "The first element is " << q.front() << endl;
}