class Solution(object):
    def isPossibleToSplit(self, nums):
        element_frequency = [0] * 101
        
        for num in nums:
            element_frequency[num] += 1

            # If any element frequency exceeds 2, it's not possible to split
            if element_frequency[num] > 2:
                return False
        
        # If no element frequency exceeds 2, it's possible to split
        return True
        