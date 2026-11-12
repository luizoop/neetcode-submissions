class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        freq.reserve(nums.size());
        // first loop over and freq[nums[i]]++
        // [1, 1, 2, 4, 5, 6, 6, 10], size = 8
        // [0, 2, 1, 0, 1, 2, 0, 0, 0]
        for(const int& n : nums){
            freq[n]++;
        }

        vector<vector<int>> values(nums.size()+ 1);
        vector<int> res;
        res.reserve(k);
        for(const auto& [key, value] : freq){
            values[value].push_back(key);
        }
        for(auto it = values.rbegin(); it != values.rend(); ++it){
            auto start = it->data();
            auto end = start + it->size();
            for(auto ix = start; ix != end; ++ix){
                res.push_back(*ix);
                if(res.size() >= k){
                    return res;
                } 
            }   
        }
        return res;
    }
};
