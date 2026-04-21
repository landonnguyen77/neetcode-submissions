class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        duplicate_dict = set()
        for num in nums:
            if num in duplicate_dict:
                return True
            duplicate_dict.add(num)
        return False