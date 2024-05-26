//Question Link : https://www.geeksforgeeks.org/problems/sum-of-first-n-terms5843/1
//Input:
//n=5
//Output:
//225
//Explanation:
//13+23+33+43+53=225


#include <iostream>
using namespace std;

class Solution {
public:
    long long sumOfSeries(long long n) {
        // code here
        if(n == 0){
            return 0;
        }
        //recursive-relation
        return (n*n*n) + sumOfSeries(n-1);
    }
};

int main(){
    Solution s1;
    cout << s1.sumOfSeries(5);
}