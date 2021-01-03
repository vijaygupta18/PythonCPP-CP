//https://atcoder.jp/contests/dp/tasks/dp_c

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

const int  inf=1e9;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	// your code goes here
	input(n)
	ll happiness[n][3];
	f(i,0,n)
	f(j,0,3)
	cin>>happiness[i][j];
	
	ll dp[n][3];
	dp[0][0]=happiness[0][0];
	dp[0][1]=happiness[0][1];
	dp[0][2]=happiness[0][2];
	
	f(i,1,n){
	    dp[i][0]=happiness[i][0]+max(dp[i-1][1],dp[i-1][2]);
	    dp[i][1]=happiness[i][1]+max(dp[i-1][0],dp[i-1][2]);
	    dp[i][2]=happiness[i][2]+max(dp[i-1][0],dp[i-1][1]);
	}
	
	
	
	cout<<max(dp[n-1][0],max(dp[n-1][1],dp[n-1][2]));
	return 0;
}
