#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define input(value) ll value; cin>>value;
#define pb push_back
#define f(x,y,z) for(ll x=y;x<z;x++)
#define inputar(ar,n) ll ar[n]; f(i,0,n) cin>>ar[i];
#define vec(name) vector<ll>name;
#define printar(arr,n) f(i,0,n) cout<<arr[i]<<" ";
#define printvec(vec) f(i,0,vec.size()) cout<<vec[i]<<" ";


ll knapsack(ll w[],ll v[],ll weight,ll n,ll dp[][100002]){
    if(n==0 || weight==0)
    return 0;
    
    if(dp[n][weight]!=-1)
    return dp[n][weight];
    
    if(w[n-1]<=weight)
    return dp[n][weight]=max(v[n-1]+knapsack(w,v,weight-w[n-1],n-1,dp),knapsack(w,v,weight,n-1,dp));
    
    else if(w[n-1]>weight)
    return dp[n][weight]=knapsack(w,v,weight,n-1,dp);
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	// your code goes here
	input(n) input(weight)
	ll w[n],v[n];
	ll dp[102][100002];
    memset(dp,-1,sizeof(dp));
	f(i,0,n)
	cin>>w[i]>>v[i];
	
	cout<<knapsack(w,v,weight,n,dp);
	
	
	
	return 0;
}
