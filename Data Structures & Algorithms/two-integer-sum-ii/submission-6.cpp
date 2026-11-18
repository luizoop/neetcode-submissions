class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        auto left = numbers.begin();
        auto right = numbers.end() -1;
        while(left < right){
            int sum = *left + *right;
            if(sum == target){
                auto index_right = static_cast<int>(right - numbers.begin()) + 1;
                auto index_left = static_cast<int>(left - numbers.begin()) + 1;
                return {index_left, index_right};
            }
            if(sum < target){
                ++left;
            }
            if(sum > target){
                --right; 
            }
            
        }
        return {};
    }
};
