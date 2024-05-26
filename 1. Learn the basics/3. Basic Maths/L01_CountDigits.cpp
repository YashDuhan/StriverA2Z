//Question Link : https://www.naukri.com/code360/problems/number-of-digits_9173

#include <iostream>
#include <math.h>
using namespace std;

//Code:
// Time complexity : O(n)
int countDigits(int n){
    // Write your code here.
    int count = 0;
    while(n != 0){
        count++;
        n = n/10;
    }
    return count;
}

//The n = n/10 trims a digit from the number

//2nd Approach
//log10(n) + 1
// log10(10342) is 4.01487 then 4.01487 + 1 = 5.01487
// Take the int value(typecast it)

// Time complexity : O(log10(n))  // O(1)
int countDigits2(int n){
    // Write your code here.
    int count = log10(n) + 1;
    return count;
}

//Local Env


int main(){
    int n = 10342; // 5 digits
    cout << "Total digits are : " << countDigits(n) << endl;
    cout << "Total digits are : " << countDigits2(n) << endl;
}