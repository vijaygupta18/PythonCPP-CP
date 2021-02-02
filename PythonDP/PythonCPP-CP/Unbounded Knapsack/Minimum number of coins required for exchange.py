#Coin Change Problem Maximum Number of ways
#Given a value N, if we want to make change for N cents, and we have infinite supply of 
#each of S = { S1, S2, .. , Sm} valued coins, 
#Find minimum number of coins required for coin exchange.

def bottom_up(arr,value):
    n=len(arr)
    dp = [[0 for i in range(value+1)] for j in range(n+1)]
    for i in range(n+1):
        for j in range(value+1):
            if j==0:
                dp[i][j]=0
             
            elif i==0:
                dp[i][j]=float("inf")
            elif arr[i-1]<=j:
                dp[i][j]=min(dp[i-1][j],1+dp[i][j-arr[i-1]])
            else:
                dp[i][j]=dp[i-1][j]
                
    return dp[n][value] 

arr=[1,2,3,4]
value=6
b=bottom_up(arr,value)
print(b)
