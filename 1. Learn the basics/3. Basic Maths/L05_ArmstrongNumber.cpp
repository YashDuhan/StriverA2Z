//Imagine n = 153 then (1^3)+(5^3)+(3^3) = 153

// Question Link : https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1

#include <iostream>
using namespace std;

class Solution {
public:
    string armstrongNumber(int n){
        // code here
        //find digits
        //make cube add them

        int temp = n;
        int finalValue = 0;
        while(n!= 0){
            int last_digit = n % 10;
            finalValue += (last_digit)*(last_digit)*(last_digit);
            n = n/10;
        }

        if(temp == finalValue){
            return "Yes";
        }else{
            return "No";
        }

    }
};


int main(){
    Solution s1;
    cout << s1.armstrongNumber(153);
}