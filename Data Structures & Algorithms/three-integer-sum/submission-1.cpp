class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        // [-4, -1, -1, 0, 1, 2]
        vector<vector<int>> res;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0) break; 
            if(i > 0 && nums[i] == nums[i - 1]) continue; 
            int l = i + 1;
            int r = nums.size() - 1; 
            while(l < r){
                int sum = nums[i] + nums[l] + nums[r];
                if (sum > 0) r--;
                if (sum < 0) l++;
                if (sum == 0){
                    res.push_back({nums[i], nums[l], nums[r]});
                    l++; // so it moves forward
                    r--; // so it moves forward
                    while (l < r && nums[l] == nums[l - 1]) {
                        l++;
                    }
                }
            }
        }
        return res;
    }
};
