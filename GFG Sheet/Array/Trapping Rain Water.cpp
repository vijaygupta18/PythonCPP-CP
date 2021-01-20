// { Driver Code Starts//https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1#
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


   

// function to find the trapped water in between buildings
// arr: input array
// n: size of array
int trappingWater(int a[], int n){

    // Your code here-0
    int ans=0;
    int l[n];
    int r[n];
    l[0]=a[0];
    r[n-1]=a[n-1];
    for(int i=1;i<n;i++ )
    l[i]=max(l[i-1],a[i]);
    for(int i=n-2;i>=0;i--)
    r[i]=max(r[i+1],a[i]);
    
    for(int i=1;i<n;i++ )
    ans+=min(l[i],r[i])-a[i];
    return ans;
}

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        
        //calling trappingWater() function
        cout << trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends
