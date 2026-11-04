from collections import defaultdict

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        groups = defaultdict(list)
        for word in strs:
            lst = []
            for letter in word:
                lst.append(letter)
            t = tuple(sorted(lst))
            groups[t].append(word)
        return list(groups.values())    