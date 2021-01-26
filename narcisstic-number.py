class Solution:
    def solve(self, n):
        s=str(n)
        return n==sum(int(x)**len(s) for x in s)
