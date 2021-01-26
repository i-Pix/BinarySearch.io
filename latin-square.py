class Solution:
    def solve(self, matrix):
        count = Counter(matrix[0])

        for i in matrix:
            if count != Counter(i):
                return False

        for i in zip(*matrix):
            if count != Counter(i):
                return False

        return True
