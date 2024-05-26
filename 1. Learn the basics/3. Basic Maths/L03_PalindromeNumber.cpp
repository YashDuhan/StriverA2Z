#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        // if the number is negative then it's not a palindrome
        if(x < 0){
            return false;
        }
        long long temp = x;
        long long finalValue = 0;
        while(temp != 0){
            int last_digit = temp % 10;
            finalValue = finalValue * 10 + last_digit;
            temp = temp / 10;
        }

        return finalValue == x;
    }
};


int main(){
    int x = 1221;
    Solution s1;
    if(s1.isPalindrome(x)){
        cout << "Palindrome";
    }else{
        cout << "Not Palindrome";
    }
}