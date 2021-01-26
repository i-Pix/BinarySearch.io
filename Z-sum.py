class Solution:
    def solve(self, matrix):
        if not matrix: return 0
        if len(matrix)==1: return matrix[0][0]
        return sum(matrix[0]) + sum(matrix[-1]) + \
        sum(matrix[i][~i] for i in range(1,len(matrix)-1))
