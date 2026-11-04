from collections import defaultdict

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        groups = defaultdict(list)
        for word in strs: 
            vector = [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
            for i in word:
                index = ord(i) - ord('a')
                vector[index] += 1;
            t = tuple(vector)
            groups[t].append(word)
        return list(groups.values())
