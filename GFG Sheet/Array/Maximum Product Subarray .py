#https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1
#User function Template for python3
class Solution:

	# Function to find maximum
	# product subarray
	def maxProduct(self,arr, n):
		# code here
		x=arr[0]
		y=arr[0]
		prod=arr[0]
		
		for i in range(1,n):
		    if arr[i]<0:
		        x,y=y,x
		    x=max(arr[i],x*arr[i])
		    y=min(arr[i],y*arr[i])
		    prod=max(prod,x)
		return prod  



#{ 
#  Driver Code Starts
#Initial Template for Python 3



if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n = int(input())
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.maxProduct(arr, n)
        print(ans)
        tc -= 1

# } Driver Code Ends
