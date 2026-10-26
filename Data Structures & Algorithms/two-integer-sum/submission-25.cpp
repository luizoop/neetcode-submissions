class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> seen; 
        seen.reserve(nums.size());
        for (int i; i < std::ssize(nums); ++i){
            auto it = seen.find(target-nums[i]);
            if (it != seen.end()){
                return {it->second, i};
            }
            seen.insert(std::pair<int, int>{nums[i], i});
        }
        return {};
    }
};
