#User function Template for python3

def majorityWins(arr, n,  x,y):
    a=0
    b=0
    for i in range(n):
        if arr[i]==x:
            a+=1
        elif arr[i]==y:
            b+=1
    if a==b:
        return(min(x,y))
    else:
        if a>b:
            return x
        else:
            return y
    # code here
    



#{ 
#  Driver Code Starts


if __name__ == '__main__':
    T=int(input())
    while(T>0):
        n=int(input())
        arr=[int(x) for x in input().strip().split()]
        
        x,y=map(int,input().strip().split())
        
        print(majorityWins(arr,n,x,y))
        T-=1

# } Driver Code Ends
