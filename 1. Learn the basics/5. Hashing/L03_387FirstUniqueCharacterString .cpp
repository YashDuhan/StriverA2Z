// 387. First Unique Character in a String
// Leetcode Link : https://leetcode.com/problems/first-unique-character-in-a-string/

class Solution {
public:
    int firstUniqChar(string s) {
        //PreComputing
        vector<int> hashh(26,0);
        for(int i = 0; i<s.size(); i++){
            hashh[s[i] - 'a']++; //increment the Hash's index
        }

        //finding the non-repeating hash
        for(int i = 0; i<s.size(); i++){
            if(hashh[s[i] - 'a'] == 1){ //If count is 1 then it's only appearing once
                return i; //returning directly will instantly break the loop
            }
        }

        return -1; //default return if every char is repeating


    }
};