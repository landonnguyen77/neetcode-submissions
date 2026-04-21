class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        result = 0 #init our output
        lowest = prices[0]     #   
        for price in prices:
            if price < lowest:
                lowest = price
            result = max(result, price - lowest)
        return result
        