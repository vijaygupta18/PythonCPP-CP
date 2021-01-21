# Your task is to complete this function //https://practice.geeksforgeeks.org/problems/palindromic-array-1587115620/1#
# Function should return True/False or 1/0
def PalinArray(a ,n):
    for x in range(n):
        val=str(a[x])
        if val!=val[::-1]:
            return False
        
    return True        
    # Code here




#{ 
#  Driver Code Starts
# Driver Program
if __name__=='__main__':
    t=int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        if PalinArray(arr, n):
            print(1)
        else:
            print(0)
# Contributed By: Harshit Sidhwa

# } Driver Code Ends
