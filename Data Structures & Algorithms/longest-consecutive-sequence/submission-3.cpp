class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> c(nums.begin(), nums.end());
        int highest = 0;
        for (int x : nums){
            if (c.contains(x-1)){
                continue;
            }
            int len = 1;
            while(c.contains(x+len)){
                len++;
            }
            highest = max(len, highest);
        }
        return highest;
    }
};
