class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        nums_map = {}
        for i in range(len(nums)):
            j = target - nums[i]
            if j in nums_map:
                return [nums_map[j], i]
            nums_map[nums[i]] = i  # store AFTER checking