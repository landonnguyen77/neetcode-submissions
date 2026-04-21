class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        new_dictionary = set()
        for i in nums:
            if i in new_dictionary:
                return True
            new_dictionary.add(i)
        return False
         