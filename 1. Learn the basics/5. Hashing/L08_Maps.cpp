// Maps are like Dictionaries of python they contain 2 values with them, and they exist in the key-value pair
// In C++ maps always store data in the sorted manner
// TC: O(logn) in all the cases

#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
    int n;
    cout << "Enter the total items in question array :";
    cin >> n;
    vector<int> arr(26,0);
    cout << "Write all the values at once :";
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    //PreComputing
    map<int,int> mapp;
    for(auto i:arr){
        mapp[i]++; // will store each element in the pair and that too in sorted manner
    }

   //The key of a map will be accessed with index.first and value as index.second;

   //Map traversal
   for(auto i:mapp){
       cout << "The key is " << i.first << " The Value is " << i.second << endl;
   }
}