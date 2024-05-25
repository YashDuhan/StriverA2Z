#include <iostream>
#include <set>
using namespace std;

//Stores everything in sorted order and unique elements

int main(){
    set<int> st;
    st.insert(10); // [10]
    st.insert(20); // [10,20]
    st.insert(20); // [10,20] (ignoring the repeated element)
    st.insert(40); // [10,20,40]
    st.insert(30); // [10,20,30,40] (automatically sorts the elements)

    st.erase(20); // deletes 20 [10,30,40] (it uses logarithmic value instead of index)
}

// There's also something as Multiset which works exactly like set but can store unique elements
// Imagine a multiset ms = [1,2,2,2,3,4,5] and
// ms.erase(2); -> output will be ms = [1,3,4,5] (all the 2s will be removed)