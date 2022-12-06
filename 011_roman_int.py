# https://leetcode.com/problems/roman-to-integer/
class Solution:
    def digitValue(self, d: str) -> int:
        switcher = {
            "I": 1,
            "V":  5,
            "X":  10,
            "L":  50,
            "C":  100,
            "D":  500,
            "M":  1000,
        }
        return switcher.get(d)
    
    def getCorrection(self, s) -> int:
        c = 0
        for i in range(len(s)-1):
            pair = s[i:i+2]
            if pair == "IV" or pair == "IX":
                c += 2
            elif pair == "XC" or pair == "XL":
                c += 20
            elif pair == "CM" or pair == "CD":
                c += 200
        return c

    def romanToInt(self, s: str) -> int:
        num = 0
        correction = self.getCorrection(s)
        while len(s) > 0:
            num += self.digitValue(s[0])
            s = s[1:]
        num -= correction
        return num

sol = Solution()
print(sol.romanToInt(input()))
