// { Driver Code Starts //https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// function to find the triplet which sum to x
// arr[] : The input Array
// N : Size of the Array
// X : Sum which you need to search for 

bool find3Numbers(int a[], int n, int X)
{
    //Your Code Here
    int val=X;
    sort(a,a+n);
    for(int i=0;i<n-1;i++){
        int j=i+1;
        int k=n-1;
        while(j<k){
            if(a[i]+a[j]+a[k]==X)
            return true;
            else if(a[i]+a[j]+a[k]<X)
            j++;
            else
            k--;
        }
}
return false;
}


// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,sum;
		cin>>N>>sum;
		int i,A[N];
		for(i=0;i<N;i++)
			cin>>A[i];
        cout <<  find3Numbers(A, N, sum) << endl;
    }
}
  // } Driver Code Ends
