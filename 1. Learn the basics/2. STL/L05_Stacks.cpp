#include <iostream>
#include <stack>
using namespace std;

//Follows LIFO
int main(){
    stack <int> st;
    st.push(1); // [1]
    st.push(2); // [2,1]
    st.push(3); // [3,2,1]
    st.push(4); // [4,3,2,1]
    st.emplace(5); // [5,4,3,2,1]

    cout << "Top most element : " << st.top() << endl;

    st.pop(); // Removed 5

    cout << "Top most element : " << st.top() << endl;

    cout << "The size is : " << st.size() << endl;

    // The stack can only perform push,pop and top; we can't traverse them with their indexes

    if(st.empty()){
        cout << "Stack is empty" << endl;
    }else{
        cout << "Stack is not empty" << endl;
    }

    st.pop();
    st.pop();
    st.pop();
    st.pop();

    if(st.empty()){
        cout << "Stack is empty" << endl;
    }else{
        cout << "Stack is not empty" << endl;
    }

}
