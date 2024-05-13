class Solution(object):
    def runningSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        running_sum = []
        curr_sum = 0
        for el in nums:
            curr_sum += el
            running_sum.append(curr_sum)
        return running_sum

        