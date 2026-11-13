class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(), 1); //[1,1,1,1]
        // nums: [1, 2, 4, 6]
        // res: [1, 1, 2, 8]
        for(int i = 1; i < nums.size(); i++){
            res[i] *= nums[i-1] * res[i-1];
        }

        int postfix = 1; 
        // nums: [1, 2, 4, 6]
        // res: [1, 1, 2, 8]
        // res: [48, 24, 12, 8]
        for(int j = nums.size()- 1; j >= 0; j--){
            res[j] *= postfix;
            postfix *= nums[j];
        }

        return res;
    }
};
