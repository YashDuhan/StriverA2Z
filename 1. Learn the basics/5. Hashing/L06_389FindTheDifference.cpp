// 389. Find the Difference
// LeetCode Link : https://leetcode.com/problems/find-the-difference/


//Code
class Solution {
public:
    char findTheDifference(string s, string t) {
        /*
        Approach:
            Calculate frequency of string t and increment in hash table
            Calculate freuqency of string s and decrement in hash table
                If both the strings were same then the hash table would be empty but since there's one extra element that will remain undeleted
            Calculate the letter whose frequency is 1 and return it
        */
        //hash array initialization
        vector<int> hashh(26,0);

        //Precompute string t
        for(auto i:t){
            hashh[i - 'a']++;
        }

        //Check String s
        for(auto i:s){
            hashh[i - 'a']--;
        }

        for(auto i:t){
            if(hashh[i- 'a'] == 1){
                return i;
            }
        }

        return -1;
    }
};