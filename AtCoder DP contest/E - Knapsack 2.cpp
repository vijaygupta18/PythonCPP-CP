//https://atcoder.jp/contests/dp/tasks/dp_e

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

const ll INF = 1e13;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	// your code goes here
	input(n) input(weight)
	ll w[n],v[n];
	f(i,0,n)
	cin>>w[i]>>v[i];
	ll val=0;
	val=accumulate(v,v+n,val);
	ll dp[val+1];
	f(i,1,val+1)
	dp[i]=INF;
	dp[0]=0;
	
	f(i,0,n){
	    for(ll j=val;j>=v[i];j--){
	        dp[j] = min(dp[j],dp[j -v[i]] + w[i]);
	    }
	}
	//cout<<dp[val]<<endl;
	for(ll i=val;i>=0;i--)
	{
	    if(dp[i]<=weight){
	        cout<<i<<endl;
	        break;
	    }
	}

	
	
	
	return 0;
}
