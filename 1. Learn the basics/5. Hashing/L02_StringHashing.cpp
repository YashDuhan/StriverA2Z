// Hashing Strings(LowerCase only)

/*
    In this hashing we will create an array with size 26(representing 26 alphabets)
    Now,
    0 --> a
    1 --> b
    2 --> c
    ..
    25 --> z

    Now the ASCII for a = 97, b = 98, c = 99 ... z = 122

    Now, to convert their respective index based location from ASCII we can subtract

    {char} - 'a' = value based index

    e.g

    'a' - 'a' = (97-97) = 0th index
    'b' - 'a' = (98-97) = 1st index
    'c' - 'a' = (99-97) = 2nd index
    ...
    'z' - 'z' = (122-97) = 25th index
 */

#include <iostream>
#include <string>
using namespace std;

int main(){

    //Question set
    string st;
    cout << "Enter the string :";
    cin >> st;

    //PreComputing
    int hashh[26] = {0}; // there are 26 alphabets
    for(int i = 0; i<st.size(); i++){
        hashh[st[i] - 'a']++;
    }

    //Fetches
    int q;
    cout << "Enter the total number of elements to be computed :";
    cin >> q;
    cout << "Enter the chars all at once :";
    for(int i = q; i>0; i--){
        char inputs;
        cin >> inputs;

        //Result
        cout << "The " << inputs << " has appeared : "<<hashh[inputs - 'a'] << " times"<< endl;
    }
}