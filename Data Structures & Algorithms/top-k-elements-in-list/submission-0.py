class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        #need to first find the frequencies of all ints in the arr (use a hashmap)
        numsCount = {}
        freq = [[] for i in range(len(nums)+ 1)]
        for i in nums:
            numsCount[i] = 1 + numsCount.get(i, 0)
        for n, c in numsCount.items():
            freq[c].append(n)
        
        result = []
        for i in range(len(freq)-1, 0, -1):
            for n in freq[i]:
                result.append(n)
                if len(result) == k:
                    return result
            