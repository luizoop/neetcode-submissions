class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        map_S, map_T = {}, {}
        for i in range(len(s)):
            map_S[s[i]] = 1 + map_S.get(s[i], 0)
            map_T[t[i]] = 1 + map_T.get(t[i], 0)

        if map_S == map_T:
            return True
        else:
            return False