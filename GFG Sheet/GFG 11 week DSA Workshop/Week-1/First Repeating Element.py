def firstRepeated(arr, n):
    if len(set(arr))==n or n==1:
        return -1
    else:
        for x in range(n):
            if arr[x] in arr[x+1:]:
                return (x+1)
    
    #arr : given array
    #n : size of the array



#{ 
#  Driver Code Starts
#Initial Template for Python 3

#contributed by RavinderSinghPB
if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        n=int(input())
        
        arr=[int(x) for x in input().strip().split()]
        
        print(firstRepeated(arr, n))
# } Driver Code Ends
