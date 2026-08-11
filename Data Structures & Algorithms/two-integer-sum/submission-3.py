class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        Map = {}
        for i, n in enumerate(nums):
            difference = target - n
            if difference in Map:
                return [Map[difference], i]
            Map[n] = i