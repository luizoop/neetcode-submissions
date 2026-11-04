from typing import List

class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq = {}
        for x in nums:
            freq[x] = freq.get(x, 0) + 1
        
        
        buckets = [[] for _ in range(len(nums)+1)]
        for x, c in freq.items():
            buckets[c].append(x)

        ks = []
        for c in range(len(buckets)-1, 0, -1):
            for x in buckets[c]:
                ks.append(x)
                if len(ks) == k:
                    return ks
