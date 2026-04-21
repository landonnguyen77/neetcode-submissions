class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        placeholder = {}
        for i, n in enumerate(nums):
            diff = target - n 
            if diff in placeholder:
                return [placeholder[diff], i]
            placeholder[n] = i
