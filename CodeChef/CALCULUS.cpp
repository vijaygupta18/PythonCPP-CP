#include<bits/stdc++.h>
#include <boost/math/common_factor.hpp> 
#include <algorithm> 
using namespace std;
#define ll long long
#define input(value) ll value; cin>>value;
#define pb push_back
#define f(x,y,z) for(ll x=y;x<z;x++)
#define inputar(ar,n) ll ar[n]; f(i,0,n) cin>>ar[i];
#define vec(name) vector<ll>name;
#define printar(arr,n) f(i,0,n) cout<<arr[i]<<" ";
#define printvec(vec) f(i,0,vec.size()) cout<<vec[i]<<" ";

ll mod=998244353;

// i thought this was tough for me but solved it finally in 20 minutes

ll gcdExtended(ll a, ll b, ll *x, ll *y){ 
    if (a == 0) { 
        *x = 0, *y = 1; 
        return b; 
    } 
    ll x1, y1;  
    ll gcd = gcdExtended(b%a, a, &x1, &y1); 
    *x = y1 - (b/a) * x1; 
    *y = x1; 
    return gcd; 
}

ll modInverse(ll a) 
{ 
    ll x, y; 
    ll g = gcdExtended(a, mod, &x, &y); 
        ll res = (x%mod + mod) % mod; 
        return res; 
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll num=0;
	// your code goes here
	input(n)
	ll arr[n+1];
	f(i,0,n)
	arr[i]=(2*(i+1))-1;
	
	if(n==1)
	cout<<2<<endl;
	else{
	    f(i,0,n)
	    num=(num+(2*modInverse(arr[i])%mod))%mod;
	    
	cout<<num%mod<<endl; 
	}
	
	
	
	return 0;
}
