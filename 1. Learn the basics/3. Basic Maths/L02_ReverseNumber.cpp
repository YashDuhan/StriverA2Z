//LeetCode Link : https://leetcode.com/problems/reverse-integer/
//Time complexity : O(n)

#include <iostream>
#include <limits>
using namespace std;


class Solution {
public:
    int reverse(int x) {
        bool isTheNumberNegative = x < 0; // return true if x < 0
        int finalValue = 0;
        x = abs(x); // make the value always positive; the negative values' modulo(%) always gives a negative modulo
        while(x != 0){
            //Edge case
            if (finalValue > (INT_MAX/10) || finalValue < (INT_MIN/10)) {
                return 0;
            }
            int last_digit = x % 10;
            finalValue = (finalValue) * 10 + last_digit;
            x = x/10;
        }
        if(isTheNumberNegative){
            finalValue = -finalValue;
        }

        return finalValue;
    }
};


int main(){
    int x = -123;
    Solution s1;
    cout << "The reversed number is " << s1.reverse(x);
}