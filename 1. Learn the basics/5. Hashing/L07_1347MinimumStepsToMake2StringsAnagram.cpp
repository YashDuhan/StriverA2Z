// 1347. Minimum Number of Steps to Make Two Strings Anagram
// LeetCode Link : https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram/

// Code

class Solution {
public:
    int minSteps(string s, string t) {

        //create a hash array
        vector<int> hashh(26,0);

        //precompute for t
        for(auto i:t){
            hashh[i-'a']++;
        }
        //decrement for s (remove common values)
        for(auto i:s){
            hashh[i-'a']--;
        }

        // counting steps
        /*
        e.g
                t = "bba"
                hashh = [0, 2, 1, ... , 0]  // Representing counts of a and b

                s = "aab"
                hashh = [-1, 0, 1, ... , 0]  // Decrementing counts for a characters

                hence hashh[i] < 0 is 1, so steps = -1
                abs(steps) = 1;

                those extra steps where the value is negative are our minimum number of steps
        */
        int step = 0;
        for(int i = 0; i<26; i++){
            if(hashh[i] < 0){
                step += hashh[i];
            }
        }
        return abs(step);
    }
};