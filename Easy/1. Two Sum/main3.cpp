class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap; 

        for (int i = 0; i < nums.size(); i++) {
            int remain = target - nums[i];            // Count remain value
            
            if (umap.find(remain) != umap.end()) {    // If find a value in umap
                return {umap[remain], i};             // Return vector
            }           

            // Put here to avoid Self-referential 
            umap[nums[i]] = i;                        // Store the index in umap
        }
        return {0}; 
    }
};
