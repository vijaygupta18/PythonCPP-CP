#User function Template for python3

def immediateSmaller(arr,n,x):
    a=[]
    for i in range(n):
        if arr[i]<x:
            a.append(arr[i])
    if len(a)==0:
        return -1
    else:
        return max(a)
    #return required ans
    
    #code here



#{ 
#  Driver Code Starts
#Initial Template for Python 3

#contributed by RavinderSinghPB
if __name__ =='__main__':
    tcs=int(input())
    
    for _ in range(tcs):
        n=int(input())
        arr=[int(e) for e in input().split()]
        x=int(input())
        
        ans=immediateSmaller(arr,n,x)
        print(ans)
# } Driver Code Ends
