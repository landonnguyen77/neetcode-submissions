class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        containsDuplicate = set()
        for num in nums:
            if num in containsDuplicate:
                return True
            containsDuplicate.add(num)
        return False
            