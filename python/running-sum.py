class Solution(object):
    def runningSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        res = []
        cpt = 0
        for element in nums:
            cpt += element
            res.append(cpt)
        return res
