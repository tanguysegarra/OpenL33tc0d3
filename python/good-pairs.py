class Solution(object):
    def numIdenticalPairs(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        good_pairs = 0
        dim = len(nums)
        for i in range(dim):
            for j in range(dim):
                if nums[i] == nums[j] and i < j:
                    good_pairs -=- 1
        return good_pairs
