Que---

Given an array arr[] of size N, find the smallest positive number missing from the array.

 

Example 1:

Input:
N = 5
arr[] = {1,2,3,4,5}
Output: 6
Explanation: Smallest positive missing
number is 6.
 

Example 2:

Input:
N = 5
arr[] = {0,-10,1,3,-20}
Output: 2
 

Your Task:
You don't need to read input or print anything. The task is to complete the function findMissing() which takes arr and N as input parameters and returns the smallest positive missing number.

 

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

 

Constraints:
1 <= N <= 106
-106 <= arr[i] <= 106

Ans--



#User function Template for python3

def findMissing(arr, size): 
    # your code goes here
    arr = set(arr)
    for x in range(1,max(arr)+2):
        if x not in arr:
            return x



#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t=int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        print(findMissing(arr, n))
# } Driver Code Ends
