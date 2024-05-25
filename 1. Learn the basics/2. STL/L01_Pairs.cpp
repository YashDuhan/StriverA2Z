#include <iostream>
using namespace std;

int main(){
     pair <int,int> p = {1,3}; //p = {1,3}
     cout << p.first << " " << p.second;

     cout << endl;

     //pair of pair
     pair<int, pair<int,int>> p1 = {1,{3,4}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;

    //pair of array
    pair<int, int> arr[] = {{1,20},{2,30},{3,30}};
    cout << arr[0].first << " " << arr[0].second << endl;
    cout << arr[1].first << " " << arr[1].second << endl;
    cout << arr[2].first << " " << arr[2].second << endl;
}