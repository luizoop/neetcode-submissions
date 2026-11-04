class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        subtrahent = {}
        for i in range(len(nums)):
            j = target - nums[i]
            if j in subtrahent: 
                return [subtrahent[j], i]
            subtrahent[nums[i]] = i  