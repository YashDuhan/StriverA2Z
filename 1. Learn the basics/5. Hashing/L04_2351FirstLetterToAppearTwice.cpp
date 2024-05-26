// 2351. First Letter to Appear Twice
// LeetCode Link : https://leetcode.com/problems/first-letter-to-appear-twice/


class Solution {
public:
    char repeatedCharacter(string s) {
        //PreComputing
        vector<int> hashh(26,0);
        for(int i = 0; i<s.size(); i++){
            hashh[s[i] - 'a']++;
            if(hashh[s[i] - 'a'] == 2){ //only insert 2 instances and break the loop
                return s[i];
            }
        }

        return -1;
    }
};