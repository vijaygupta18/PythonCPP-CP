#https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution:
    def maxProfit(self, a: List[int]) -> int:
        mini=10001
        profit=0
        sell=0
        for x in range(len(a)):
            if mini>a[x]:
                mini=a[x]
            profit=max(profit,a[x]-mini)
        return profit    
        
