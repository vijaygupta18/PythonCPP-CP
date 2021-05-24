
def transitionPoint(arr, n):
    #Code here
    if len(set(arr))==1 and arr[0]==0:
        return -1
    else:
        for x in range(n):
            if arr[x]==1:
                return x



#{ 
#  Driver Code Starts
#driver code
if __name__=='__main__':
    t=int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        print(transitionPoint(arr, n))

# } Driver Code Ends
