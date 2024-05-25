#include <iostream>
using namespace std;
/*
    1st:
        * * * *
        * * * *
        * * * *
        * * * *
*/

void pattern1(){
    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++){
            cout << " * ";
        }
        cout << endl;
    }
}

/*
    2nd Pattern:
                *
                *  *
                *  *  *
                *  *  *  *
                *  *  *  *  *

    0th row = 1 col
    1st row = 2 col
    2nd row = 3 col
    ...
    4th row = 5 col
*/

void pattern2(){
    for(int i = 0; i<5; i++){
        for(int j = 0; j<i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

/*
    3rd Pattern:
    1
    1   2
    1   2   3
    1   2   3   4
    1   2   3   4   5
*/

void pattern3(){
    for(int i = 0; i<5; i++){
        for(int j = 0;j<i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

/*
    4th Pattern:
                1
                2   2
                3   3   3
                4   4   4   4
                5   5   5   5   5
*/

void pattern4(){
    for(int i = 1; i<5; i++){
        for(int j = 0; j<i; j++){
            cout << i;
        }
        cout << endl;
    }
}

/*
     5th Pattern:
                 *  *   *   *   *
                 *  *   *   *
                 *  *   *
                 *  *
                 *
*/

void pattern5(){
    for(int i = 5; i!=0; i--){      //Reverse traversal
        for(int j = 0; j<i; j++){   //Normal traversal
            cout << "* ";
        }
        cout << endl;
    }
}

/*
    6th Pattern:
                1   2   3   4   5
                1   2   3   4
                1   2   3
                1   2
                1
*/

void pattern6(){
    for(int i = 6; i!=0; i--){
        for(int j = 1; j<i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

int main(){
    cout << "Pattern 1 " << endl;
    pattern1();
    cout << "Pattern 2 " << endl;
    pattern2();
    cout << "Pattern 3" << endl;
    pattern3();
    cout << "Pattern 4" << endl;
    pattern4();
    cout << "Pattern 5" << endl;
    pattern5();
    cout << "Pattern 6" << endl;
    pattern6();
}