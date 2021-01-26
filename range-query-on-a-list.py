class SegmentTree:
	def __init__(self, nums):
		self.l = len(nums)
		self.tree = [0] * self.l + nums
		for i in range(self.l - 1, 0, -1):
			self.tree[i] = self.tree[i * 2] + self.tree[i * 2 + 1]

	def sum_range(self, i, j):
		m = self.l + i
		n = self.l + j
		ans = 0
		while m <= n:
			if m % 2 == 1:
				ans += self.tree[m]
				m += 1
			m //= 2
			
			if n % 2 == 0:
				ans += self.tree[n]
				n -= 1
			n //= 2
		return ans
		
class RangeSum:
    def __init__(self, nums):
        self.st = SegmentTree(nums)
    def total(self, i, j):
        return self.st.sum_range(i, j-1)
        
