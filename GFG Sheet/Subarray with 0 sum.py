#https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1
#User function Template for python3

#Complete this function
def subArrayExists(arr,n):
    val=0
    s=set()
    for x in range(n):
        val+=arr[x]
        if val==0 or val in s:
            return True
        s.add(val)
    return False    
    
    ##Your code here
    #Return true or false



#{ 
#  Driver Code Starts
#Initial Template for Python 3



def main():
    T=int(input())
    while(T>0):
        
        n=int(input())
        arr=[int(x) for x in input().strip().split()]
        if(subArrayExists(arr,n)):
            print("Yes")
        else:
            print("No")
        
        
        T-=1

if __name__=="__main__":
    main()
# } Driver Code Ends
