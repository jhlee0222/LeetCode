class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> umap;                     // umap store the subscript of the last occurrence of each character.
        int maxLen = 0;
        int left = 0; 
        
        for (int right = 0; right < s.size(); right++) {
            char c = s[right];
            if (umap.find(c) != umap.end()) {              // If there is "c" in umap
                left = max(left, umap[c] + 1);             // Each time a repeated character is found, the left boundary is moved to avoid duplication.
            }
            umap[c] = right;                               // Store the subscript of the last occurrence of each character.
            maxLen = max(maxLen, right - left + 1);        // right - left + 1 is the current window length.
        }
        
        return maxLen;
    }
};
