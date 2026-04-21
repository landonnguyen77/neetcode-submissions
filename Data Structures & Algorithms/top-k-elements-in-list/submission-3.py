class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        dict = {}
        for num in nums:
            dict[num] = 1 + dict.get(num, 0)
        
        arr = []
        for num, cnt in dict.items():
            arr.append([cnt, num])
        arr.sort()

        result = []
        while len(result) < k:
            result.append(arr.pop()[1])
        return result