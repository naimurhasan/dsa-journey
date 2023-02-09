class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        blist = []
        pairs = {
            '(':')',
            '[':']',
            '{':'}',
        }
        for ch in s:
            if ch in "([{":
                blist.append(ch)
            elif len(blist)==0 or ch != pairs[blist.pop()]:
                return False
        return len(blist)==0
sol = Solution()
inp = input()
output = sol.isValid(inp)
print(output)