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
	string s,t;
	cin>>s;
	cin>>t;
	int m=s.length();
	int n=t.length();
	int dp[m+1][n+1];
	//filling the table
	f(i,0,m+1){
	    f(j,0,n+1){
	        if(i==0 || j==0)
	        dp[i][j]=0;
	        else{
	            //if char is equal then
	            if(s[i-1]==t[j-1])
	            dp[i][j]=dp[i-1][j-1]+1;
	            //if not then
	            else
	            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
	        }
	    }
	}

	if(dp[m][n]==0)
	cout<<endl;
	else
	{
	    int i=m;
	    int j=n;
	    string ans;
	    while(i>0 && j>0){
	        if(s[i-1]==t[j-1]){
	            ans.pb(s[i-1]);
	            i--;
	            j--;
	        }
	        else{
	            if(dp[i][j-1]>dp[i-1][j])
	            j--;
	            else
	            i--;
	        }
	    }
	    reverse(ans.begin(), ans.end());
	    cout<<ans<<endl;
	}
	
	
	
	
	
	return 0;
}
