#include <iostream>
using namespace std;


/*
 Pattern 1:(n = 5)
    *
   ***
  *****
 *******
*********

 for 5 rows it can be written as

SSSS*SSSS   ---> contains 4 space in the beginning; 1 star in the middle; 4 space in the end  [Row 0]
SSS***SSS   ---> contains 3 space in the beginning; 3 stars in the middle; 3 space in the end [Row 1]
SS*****SS   ---> contains 2 space in the beginning; 5 stars in the middle; 2 space in the end [Row 2]
S*******S   ---> contains 1 space in the beginning; 7 stars in the middle; 1 space in the end [Row 3]
*********   ---> contains 0 space in the beginning; 9 stars in the middle; 0 space in the end [Row 4]

 [Space, Star, Space]
 [4,1,4] --> row 0
 [3,3,3] --> row 1
 [2,5,2] --> row 2
 [1,7,1] --> row 3
 [0,9,0] --> row 4
 Things we can deduce are
    > spaces are same
    > spaces are in reverse order of the row
    so,
        space = (n-i) - 1;
            for 1st iteration 0 : (5-0) - 1 = 4Ans
            for 2nd iteration 1 : (5-1) - 1 = 3Ans
            for 3rd iteration 2 : (5-2) - 1 = 2Ans
            for 4th iteration 3 : (5-3) - 1 = 1Ans
            for 5th iteration 4 : (5-4) - 1 = 0Ans

        Now For stars:
            stars = (2*i) + 1;
                for 1st iteration 0 : 2*0 + 1 = 1Ans
                for 2nd iteration 1 : 2*1 + 1 = 3Ans
                ...
                for 5th iteration 4 : 2*4 + 1 = 9Ans
*/


void pattern1(int n){
    for(int i = 0; i<n;i++){
        //space
        for(int j = 0; j<n-i-1; j++){
            cout << " ";
        }
        //star
        for(int j = 0; j<2*i+1; j++){
            cout << "*";
        }
        //space
        for(int j = 0; j<n-i-1; j++){
            cout << " ";
        }

        cout << endl;
    }
}

int main(){
    cout << "Pattern 1" << endl;
    pattern1(5);
}