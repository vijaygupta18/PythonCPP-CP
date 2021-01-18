// { Driver Code Starts https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1#
#include <bits/stdc++.h>
using namespace std;

int findLongestConseqSubseq(int arr[], int n);
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  cout<<findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}// } Driver Code Ends


// arr[] : the input array
// N : size of the array arr[]

// return the length of the longest subsequene of consecutive integers
int findLongestConseqSubseq(int arr[], int n)
{
  //Your code here
  int c=1;
  int val=0;
  set<int>s;
  for(int i=0;i<n;i++)
  s.insert(arr[i]);
  vector<int>v;
  for(auto i:s)
  v.push_back(i);
  
  for(int i=0;i<v.size()-1;i++){
      if(v[i]+1==v[i+1])
      c+=1;
      else{
      val=max(val,c);
      c=1;}
  }
  val=max(c,val);
  return val;
}
