#include <bits/stdc++.h>
#define mod 1000000007
#define MOD 1000000007
using namespace std;
typedef long long int ll;
int f[100000+1];

ll binpow(ll a, ll b, ll m){
    a %= m;
    ll res = 1;
    while (b > 0){
        if(b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
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
int ncr(int n, int r){
	return (f[n]*modInverse(((ll)f[r]*f[n-r])%mod))%mod;
}
ll power(ll a, ll b)
{
	ll val = 1;
	while (b> 0)
	{
		if (b%2==1)
			val=((val%MOD)*(a%MOD))%MOD;
		a=((a%MOD)*(a%MOD))%MOD;
		b=b/2;
	}
	return val;
}
int main() {
	ios::sync_with_stdio(false);
    cin.tie(0);
    f[0] = 1;
    for(int i=1; i<=100000; i++)
        f[i] = ((ll)i*f[i-1])%mod;
    int t;
	cin >> t;
	while(t--){
	    int n;
	   cin >> n; 
	   vector<ll>v(n);
	   ll max=0;
	   int b=0;
	   for(int i=0;i<n;i++){
	       cin>>v[i];
	       if(v[i]>max){
	           max=v[i];
	           b=0;
	       }
	       if(v[i]==max)
	       b++;
	       
	   }
	  if(b%2==0){
	      int l=n-b;
	      ll d=ncr(b,b/2)%MOD;
	      int z=((power(2,n)%MOD-(d*(power(2,l))%MOD))%MOD+MOD)%MOD;
	      cout<<z<<endl;
	      
	  }
	  
	  else{
	      int d=power(2,n);
	      cout<<d%MOD<<endl;
	  }
		}
}