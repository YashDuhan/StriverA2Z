//GFG Link : https://www.geeksforgeeks.org/problems/print-gfg-n-times/1

#include <iostream>
using namespace std;

class Solution {
public:
    void printGfg(int N) {
        // Code here
        //Base-case
        if(N == 0){
            return;
        }
        //condition
        cout << "GFG ";
        //recursive-function
        printGfg(N-1);
    }
};


int main(){
    Solution s1;
    s1.printGfg(10);
}