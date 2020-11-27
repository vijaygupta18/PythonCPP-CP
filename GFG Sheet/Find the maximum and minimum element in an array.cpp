#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod=1000000007
#define input(value) ll value; cin>>value;
#define pb push_back
#define f(x,y,z) for(ll x=y;x<z;x++)
#define inputar(ar,n) ll ar[n]; f(i,0,n) cin>>ar[i];
#define vec(name) vector<ll>name;
#define printar(arr,n) f(i,0,n) cout<<arr[i]<<" ";
#define printvec(vec) f(i,0,vec.size()) cout<<vec[i]<<" ";


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    input(t)
    while(t--){
        input(n)
        inputar(a,n)
        ll x=a[0];
        ll y=a[0];
        f(i,1,n){
            if(a[i]>x)
            x=a[i];
            if(a[i]<y)
            y=a[i];
        }
        cout<<y<<" "<<x<<endl;
        
    }
	
	// your code goes here
	
	
	return 0;
}
