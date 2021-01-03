def maxSubArraySum(a,size):
    ##Your code here
    dp=[]
    dp.append(a[0])
    for x in range(1,size):
        dp.append(max(a[x],dp[x-1]+a[x]))
    return max(dp)
