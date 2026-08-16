class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq = {}
        for num in nums:
            freq[num] = 1 + freq.get(num, 0)
        
        arr = []
        for num, count in freq.items():
            arr.append([count, num])    
        arr.sort()

        result = []
        while len(result) < k:
            result.append(arr.pop()[1])
        return result  