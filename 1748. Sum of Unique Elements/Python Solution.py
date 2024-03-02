from collections import Counter
class Solution:
    def sumOfUnique(self, nums: List[int]) -> int:
        ls = Counter(nums)
        add = 0
        for i in ls.keys():
            if ls[i] == 1:
                add += i
        return add