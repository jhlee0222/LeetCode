class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.length();
        int maxLen = 0;
        
        if(len == 0) return 0;
        if(len == 1) return 1;

        for(int i = 0; i < len; i++){
            unordered_map<char, int> umap;
            int currLen = 0;
            for (int j = i; j < len; j++) {
                char c = s[j];
                umap[c]++;
                if(umap[c] == 2) break;
                currLen++;
            }
            if(maxLen < currLen) maxLen = currLen;
        }

        return maxLen;
    }
};
