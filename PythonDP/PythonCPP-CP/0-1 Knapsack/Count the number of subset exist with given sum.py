  
##Question:-To count number of subset which can give sum equal to given value.
#function for bottom up approach
def bottom_up(arr,n,value):
    #declare a list of size 1 more than the given value and lenth of array
    dp = [[0 for i in range(value+1)] for j in range(n+1)]
    for i in range(n+1):
        for j in range(value+1):
           
            if j==0:
                dp[i][j]=1
             
            elif i==0:
                dp[i][j]=0
            elif arr[i-1]<=j:
                dp[i][j]=dp[i-1][j] + dp[i-1][j-arr[i-1]]
            else:
                dp[i][j]=dp[i-1][j]
                
    return dp[n][value]            
                
    

#lenth of the array
n=int(input())
#input aarray
arr=[int(x) for x in input().split()][:n]
#input value of sum
value=int(input())

d=bottom_up(arr,n,value)
print(d)
