Que--

Given a number N, find an integer denoting the smallest number evenly divisible by each number from 1 to n.


Example 1:

Input:
N = 3
Output: 6
Explanation: 6 is the smallest number 
divisible by 1,2,3.

Example 2:

Input:
N = 6
Output: 60
Explanation: 60 is the smallest number 
divisible by 1,2,3,4,5,6.

Your Task:  
You dont need to read input or print anything. Complete the function getSmallestDivNum() which takes N as input parameter and returns the smallest number evenly divisible by each number from 1 to n.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)


Constraints:
1 ≤ N ≤ 25



ans--

class Solution{
public:
    long long getSmallestDivNum(long long n){
        // code here
        long long ans = 1;     
    for (long long i = 1; i <= n; i++) 
        ans = (ans * i)/(__gcd(ans, i)); 
    return ans;
    }
};

