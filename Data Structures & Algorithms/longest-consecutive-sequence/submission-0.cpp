class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s; 
        if (nums.empty())return 0;
        for (int i : nums){
            s.insert(i);
        }
        int count = 1;
        int highest_count = 1; 
        for (auto it = s.begin(); it != s.end(); ++it){
            auto nx = std::next(it);
            if (nx == s.end()) break;
            if(*nx - *it == 1){
                count++;
                highest_count = max(highest_count, count);
            }else{
                count = 1; 
            };
        }
        return highest_count; 
    }
};
