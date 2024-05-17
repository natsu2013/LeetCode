from typing import List
class Solution: 
    def two_sum(self, nums: List[int], target:int) -> List[int]:
        nums_map = {}
        for i, num in enumerate(nums):
            complement = target - num
            if complement in nums_map:
                return [nums_map[complement], i]
            nums_map[num] = i
        return []

s = Solution()
print (s.two_sum(nums=[1,2,3,5,7,8,9], target=10))
