# Given a rod of length n inches and an array of prices that contains prices of all pieces of size smaller than n. 
#Determine the  maximum value obtainable by cutting up the rod and selling the pieces

def bottom_up(length,profit,n):
    leng=len(length)
    dp = [[0 for i in range(n+1)] for j in range(leng+1)]
    for i in range(1,leng+1):
        for j in range(1,n+1):
            if length[i-1]<=j:
                dp[i][j]=max(profit[i-1]+dp[i][j-length[i-1]] ,dp[i-1][j])
            else:
                dp[i][j]=dp[i-1][j]
                
    return dp[leng][n]
    
length = [1,2 , 3, 4, 5, 6, 7, 8]
profit = [1, 5, 8, 9, 10, 17, 17, 20]
n = 8
b=bottom_up(length,profit,n)
print(b)
