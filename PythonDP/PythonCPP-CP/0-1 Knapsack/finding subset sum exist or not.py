#Question:-To check if the given array has a subset which can give sum equal to given value.
#function for bottom up approach
def bottom_up(arr,n,value):
    #declare a list of size 1 more than the given value and lenth of array
    dp = [[0 for i in range(value+1)] for j in range(n+1)]
    for i in range(n+1):
        for j in range(value+1):
            #here the initial lenght of array is 0 null subset cant give and sum other than zero
            if i==0:
                dp[i][j]=0
            #here if sum is zero then all subset satisfies the value    
            elif j==0:
                dp[i][j]=1
            elif arr[i-1]<=j:
                dp[i][j]=dp[i-1][j]  or dp[i-1][j-arr[i-1]]
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
if(d==1):
    print("Yes subset sum of",value,"exist")
else:
    print("No subset sum of",value,"doesn't exist")
