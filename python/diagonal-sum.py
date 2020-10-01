class Solution(object):
    def diagonalSum(self, mat):
        """
        :type mat: List[List[int]]
        :rtype: int
        """
        dim = len(mat)
        res = 0
        for i in range(dim):
            res += mat[i][i]
            res += mat[i][dim - i - 1]
        if len(mat) % 2 == 0:
            return res
        return res - mat[dim // 2][dim // 2]
