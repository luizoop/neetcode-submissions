class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> seen;
        seen.reserve(nums.size());
        for(int i = 0; i < nums.size(); i++){
            int addend = target - nums[i];
            for(int j = 0; j < nums.size(); j++){
                if(seen[j] == addend)return{j, i};
            }
            seen[i] = nums[i];
        }
    }
};
