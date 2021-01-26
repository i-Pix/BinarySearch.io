class Solution:
    def solve(self, nums, k):
        if len(nums) == 1:
            return False
        s = set(nums)
        for i in nums:
            if k - i in s:
                if k - i == i:
                    if nums.count(i) <= 1:
                        continue
                return True
        return False
