// { Driver Code Starts  //https://practice.geeksforgeeks.org/problems/smallest-subarray-with-sum-greater-than-x5651/1#
#include <bits/stdc++.h>
using namespace std;

int sb(int arr[], int n, int x);

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		cout<<sb(a,n,x)<<endl;
	}
	return 0;
}// } Driver Code Ends




int sb(int arr[], int n, int x)
{
int sum=0;
int k=0;
int j=0;
int mini=n+1;
while(k<n){
    while(sum<=x && k<n)
    sum+=arr[k++];
    while(sum>x && j<n){
        if(k-j<mini)
        mini=k-j;
        sum-=arr[j++];
    }
    
}

return mini;
    // Your code goes here   
}
