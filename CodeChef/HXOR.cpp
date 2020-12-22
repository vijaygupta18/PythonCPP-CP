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


unsigned countbits(unsigned int number) 
{       

      return (int)log2(number)+1; 
} 
//solved it after 3 days...remember hardwork always pays off
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
 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	input(t)
	while(t--){
	// your code goes here
	input(n) input(x)
    inputar(a,n)
	bitset<32>bit[n];
	f(i,0,n)
	bit[i]=a[i];
	
	bitset<32>bitar;
	f(j,0,n-1)
	for(ll i=31;i>=0;i--){
	    
	    if(x>0 && bit[j][i]==1){
	       // cout<<bit[j][i];
	        
	       if(bitar[i]==0){
	           //cout<<i<<endl;
	        bitar[i]=1;
	           bit[j][i]=0;
	           x=x-1; 
	           
	        }
	        else{
	            bitar[i]=0;
	           bit[j][i]=0;
	           
	        }
	            
	        }
	        
	   else if(x==0){
	       if(bitar[i]==1 && bit[j][i]==1){
	           bitar[i]=0;
	           bit[j][i]=0;}
	           
	       }

	    }
	    bit[n-1]^=bitar;
	    if(x>0)
	    {
	        if(n==2){
	            bit[n-1][0]=bit[n-1][0]^(x%2);
	    bit[n-2][0]=bit[n-2][0]^(x%2);
	            
	        }
	        else
	        if(x==1){
	            bit[n-1][0]=bit[n-1][0]^(x%2);
	    bit[n-2][0]=bit[n-2][0]^(x%2);}
	        
	    }
	    
	 ll val=0;
	    
	f(j,0,n){
	for(ll i=31;i>=0;i--){
	   if(bit[j][i]==1)
	   val+=power(2,i);
	}
	a[j]=val;
	val=0;
	}
	//cout<<bitar;
	printar(a,n)
	cout<<endl;
	
	}
	return 0;
}



