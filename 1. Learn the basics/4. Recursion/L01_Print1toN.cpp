// Question Link : https://www.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1

#include <iostream>
using namespace std;

class Solution{
public:
    //Complete this function
    void printNos(int N)
    {
        //Your code here
        if(N>0){
            // cout << N << " "; // It will print 1 to N in reverse
            printNos(N-1);
            cout << N << " ";
        }
    }
};

int main(){
    Solution s1;
    s1.printNos(10);
}