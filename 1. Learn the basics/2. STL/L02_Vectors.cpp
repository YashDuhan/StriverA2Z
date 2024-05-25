#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(1); //inserts 1 in v
    v.emplace_back(2); //inserts 2 in v

    vector<pair<int,int>> vec;
    vec.push_back({1,2}); //curly braces are necessary
    vec.emplace_back(1,2); //curly braces aren't necessary

    //initialise with default value
    vector<int> v1(5,20); // [20,20,20,20,20]
    vector<int> v2(7); // [0,0,0,32,2321,3,0] 7 garbage values
    //even if size has been declared the vector can still be expanded

    //copy a vector
    vector<int> v3(3,50);
    vector<int> v4(v3); //v4 now has the values of v3

    //Accessing the vector
    vector <int> vec2 = {20,10,15,6,7};

    //Via Index
    cout << vec2[0] << endl;
    cout << vec2[1] << endl;
    cout << vec2[2] << endl;
    cout << vec2[3] << endl;
    cout << vec2[4] << endl;

    //Via Iterators
    vector<int>::iterator it = vec2.begin(); //only carries the address not value
    cout << "Iterators " << endl;
    cout << *(it) << endl;
    it++;
    cout << *(it) << endl;
    it++;
    cout << *(it) << endl;


    //Iterator with for loop
    vector <int> vec3 = {20,10,15,6,7};
    for(vector<int>::iterator it = vec3.begin(); it != vec3.end(); it++){
        cout << *(it) << " ";
    }

    cout << endl;

    //Iterator with for each loop
    for(auto it = vec3.begin(); it != vec3.end(); it++){
        cout << *(it) << " ";
    }

    cout << endl;

    //using a for each loop
    for(auto it : vec3){
        cout << it << " ";
    }

    cout << endl;

    //Erase in vector
    //10,20,12,23
    vector <int> vec4 = {10,30,20,12,23};
    vec4.erase(vec4.begin()); // deletes 10
    for(auto i:vec4){
        cout << i << " ";
    }
    //delete in range
    vec4.erase(vec4.begin()+1, vec4.begin()+3); //ease(start,end)
    cout << endl;
    for(auto i:vec4){
        cout << i << " ";
    }

    cout << endl;

    //Insert in vector
    vector<int> vec6(2,100); // {100,100}
    vec6.insert(vec6.begin(), 300); //insert(pos,element) {300,100,100}
    vec6.insert(vec6.begin() + 2 , 3, 400); // insert(pos,no. of occurrences, element) {300,100,400,400,400,100}
    for(auto i:vec6){
        cout << i << " ";
    }

    cout << endl;
    vec6.clear(); //deletes all elements from the vector
    cout << "Size of Vec6 : " << vec6.size();
}