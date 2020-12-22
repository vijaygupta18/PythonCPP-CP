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
	
	// your code goes here
	input(t)
	while(t--){
	    
	string s;
	cin>>s;
	set<string>result;
	vector<string>v;
	ll n=s.size();
	//approach is to store the length no. of 1s and odd no. of 0s
	map<pair<ll,pair<int,int>>,int>setst;
	f(i,0,n){
	ll odd1=0,odd0=0;    
	
	for(ll j=1;j<=n-i;j++){
	    string substring=s.substr(i,j);
	    if(odd1%2==1 && s[i+j-1]=='0')
	    odd0++;
	    if(s[i+j-1]=='1')
	    odd1++;
	    setst[{j,{odd1,odd0}}]=1;
	}
	}
	 cout<<setst.size()<<endl;
	    
	}
	
	
	return 0;
}
