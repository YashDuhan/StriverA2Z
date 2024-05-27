// Unordered Map
// Works exactly like Maps the only difference is that in Best and Average time they perform operations in O(1) time and in worst time it can run in O(n)
// It's Ideal to always prefer unordered map

#include <iostream>
#include <unordered_map>
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
    unordered_map<int,int> mapp;
    for(auto i:arr){
        mapp[i]++; // will store each element in the pair and that too in sorted manner
    }

    //The key of a map will be accessed with index.first and value as index.second;

    //Map traversal
    for(auto i:mapp){
        cout << "The key is " << i.first << " The Value is " << i.second << endl;
    }
}