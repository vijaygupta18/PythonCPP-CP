//https://atcoder.jp/contests/dp/tasks/dp_a

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
	input(n) //input(k)
	vector<int>height(n+1,0);
	f(i,1,n+1)
	cin>>height[i];
	vector<int>cost(n+1,inf);
	cost[1]=0;
	ll a=1;
	f(i,2,n+1){
	    for(ll j=i-1;j>=max(a,i-2);j--){
	        //cout<<j<<endl;
	        cost[i]=min(cost[i],cost[j]+abs(height[i]-height[j]));
	    }
	}
	
	cout<<cost[n];
	return 0;
}
