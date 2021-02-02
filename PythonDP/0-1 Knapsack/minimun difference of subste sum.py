#Question:- Find the minimum difference which can be found by subset sum
def bottom_up(arr,n,value):
    dp=[[False for x in range(value+1)] for i in range(n+1)]
    for i in range(n+1):
        for j in range(value+1):
            if i==0:
                dp[i][j]=False
            elif j==0:
                dp[i][j]=True
            elif( arr[i-1]<=j):
                dp[i][j]=dp[i-1][j] or dp[i-1][j-arr[i-1]]
            else:
                dp[i][j]=dp[i-1][j]
#approach is we find the range of given array and then store the max value which is nearest to its half    
    last=[]
    half=value//2
    for x in range(half+1):
        if dp[n][x]==True:    
            last.append(x)
    ans=value-2*max(last)
        
        
                
    return ans            
                
    

n=int(input())
arr=[int(x) for x in input().split()][:n]
value=sum(arr)
d=bottom_up(arr,n,value)
print(d)
