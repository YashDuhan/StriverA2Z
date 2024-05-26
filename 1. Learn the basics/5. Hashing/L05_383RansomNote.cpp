// 383. Ransom Note
// LeetCode Link: https://leetcode.com/problems/ransom-note/


class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        // Objective: Create 'ransomNote' from 'magazine'
        /*
        Approach:
            Count frequencies for string 1,
            Check the string 2's frequency if it can be acommodated
                check if (hash[j - 'a'] > 0):
                                        if true then hash[j-'a']--;
                                        (we deleted one hash because it's not has already been used and can't be reused)
                                        if false then return false;
        */


        //Initialised hash array
        vector<int> hashh(26,0);

        //counted frequency for magazine
        for(auto i:magazine){
            hashh[i - 'a']++;
        }

        //checking ransomNote
        for(auto j:ransomNote){
            if(hashh[j-'a'] > 0){
                hashh[j - 'a']--; //used one letter
            }else{
                return false;
            }
        }

        return true; //all computations are correct
    }
};