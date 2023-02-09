class Solution:
    def longestCommonPrefix(self, strs):
        if not strs:
            return ""
        shortest = min(strs, key=len)
        for i, ch in enumerate(shortest):
            for other in strs:
                if ch != other[i]:
                    return shortest[:i]
                
sol = Solution()
output = sol.longestCommonPrefix(["flower","flow","flight"])
print(output)