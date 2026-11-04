from typing import Optional

class Solution:
    def encode(self, strings: [Optional[str]])-> str:
        result = ""
        for string in strings: 
            if string is None: 
                raise ValueError("strings cannot contain None")
            result += string + "±"
        return result
    
    def decode(self, result: str) -> [Optional[str]]:
        words = []
        word = ""
        for x in range(len(result)):
            if result[x] != '±':
                word += result[x]
            else: 
                words.append(word)
                word = ""
        return words


sol = Solution()
encoded = sol.encode(["Hello","World"])
decoded = sol.decode(encoded)