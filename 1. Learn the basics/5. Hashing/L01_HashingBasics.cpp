//Hashing integers

#include <iostream>
using namespace std;

int main(){

    //Creating question array
    int n;
    cout << "Enter the total items in question array :";
    cin >> n;
    int arr[n];
    cout << "Enter the elements to be inserted in question array :";
    for(int i = 0; i<n; i++){
        cin>> arr[i];
    }

    //Precomputing
    //Let's assume that the q's input will always be under 13
    int hashh[13] = {0};
    for(int i = 0; i<n; i++){
        hashh[arr[i]]++; //pick up the element from question array and updates its frequency in hashh array
    }


    //Fetching
    cout << "Enter the total elements to be computed :";
    int q; //total fetches
    cin >> q;
    cout << "Enter all the inputs at once :";
    for(int i = q; i>0; i--){
        int inputs;
        cin >> inputs;

        //computed result
        cout << "The " << inputs << " has appeared : "<<hashh[inputs] << " times"<< endl;
    }

}