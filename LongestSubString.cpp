class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> dict(256, -1);
        int maxlen = 0;
        int begin = -1;
        for(int i = 0; i < s.length(); i++){
            if(dict[s[i]] > begin)
                begin = dict[s[i]];
            
            dict[s[i]] = i;
            maxlen = max(maxlen, i-begin);
        }
        
        return maxlen;
    }
};
