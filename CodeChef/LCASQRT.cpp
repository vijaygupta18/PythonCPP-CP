// used reference from sites available on internet
//gfg and github
//https://www.geeksforgeeks.org/find-square-root-modulo-p-set-2-shanks-tonelli-algorithm/
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

//code reference
//https://rosettacode.org/wiki/Tonelli-Shanks_algorithm
uint64_t modpow(uint64_t a, uint64_t b, uint64_t n) {
    uint64_t x = 1, y = a;
    while (b > 0) {
        if (b % 2 == 1) {
            x = (x * y) % n; // multiplying with base
        }
        y = (y * y) % n; // squaring the base
        b /= 2;
    }
    return x % n;
}
 
struct Solution {
    uint64_t root1, root2;
    bool exists;
};
 
struct Solution makeSolution(uint64_t root1, uint64_t root2, bool exists) {
    struct Solution sol;
    sol.root1 = root1;
    sol.root2 = root2;
    sol.exists = exists;
    return sol;
}
 
struct Solution ts(uint64_t n, uint64_t p) {
    uint64_t q = p - 1;
    uint64_t ss = 0;
    uint64_t z = 2;
    uint64_t c, r, t, m;
 
    if (modpow(n, (p - 1) / 2, p) != 1) {
        return makeSolution(0, 0, false);
    }
 
    while ((q & 1) == 0) {
        ss += 1;
        q >>= 1;
    }
 
    if (ss == 1) {
        uint64_t r1 = modpow(n, (p + 1) / 4, p);
        return makeSolution(r1, p - r1, true);
    }
 
    while (modpow(z, (p - 1) / 2, p) != p - 1) {
        z++;
    }
 
    c = modpow(z, q, p);
    r = modpow(n, (q + 1) / 2, p);
    t = modpow(n, q, p);
    m = ss;
 
    while (true) {
        uint64_t i = 0, zz = t;
        uint64_t b = c, e;
        if (t == 1) {
            return makeSolution(r, p - r, true);
        }
        while (zz != 1 && i < (m - 1)) {
            zz = zz * zz % p;
            i++;
        }
        e = m - i - 1;
        while (e > 0) {
            b = b * b % p;
            e--;
        }
        r = r * b % p;
        c = b * b % p;
        t = t * c % p;
        m = i;
    }
}
 
int test(uint64_t n, uint64_t p) {
    struct Solution sol = ts(n, p);
    if (sol.exists) {
        return sol.root1;
    } else {
        return -1;
    }

}
vector<ll>value(500001);
ll mod=998244353;
//binpow template
ll power(ll a, ll b)
{
	ll val = 1;
	while (b> 0)
	{
		if (b%2==1)
			val=((val)*(a));
		a=((a)*(a));
		b=b/2;
	}
	return val;
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




//code from open source gfg
void dfs(ll c[],ll p,vector<ll> tree[],ll a,ll b) 
{
    value[a] = c[a];
    for (auto u:tree[a]) { 
        if (u == b) 
            continue; 
        dfs(c, p,tree,u, a);
        value[a] = (value[a]%p+value[u]%p)%p; 
    } 
} 





int main()
{
  input(t)
    while(t--)
    {
        input(n) input(p)
        vector<ll> tree[n+1];
        ll parent[n + 1];
        f(i,2,n+1)
        {
            cin>>parent[i];
            tree[parent[i]].push_back(i);
            tree[i].push_back(parent[i]);
        }
        ll c[n+1];
        f(i,1,n+1)
        cin>>c[i];
        dfs(c,p,tree,1,0);
        ll series[n+1];
        ll k=1,x;
        f(i,1,n+1)
        {
    
            if(value[i]==0)
            x=0;
            else
            x=test(value[i],p);
            
            if(x==-1)
            break;
            else
            {
                value[i]=x;
                if(value[i]!=0)
                k=((k%mod)*2)%mod;
            }
        }
        f(i,1,n+1)
        {
            series[i]=value[i];
        }
        f(i,2,n+1)
        {
            series[parent[i]]=(series[parent[i]]-value[i]+p)%p;
        }
        if(x==-1){
        cout<<"0"<<endl;
        cout<<x<<endl;}
        else
        {
            cout<<k<<endl;
            f(i,1,n+1)
            cout<<series[i]<<" ";
            cout<<endl;
        }
        value.clear();
    }
}
