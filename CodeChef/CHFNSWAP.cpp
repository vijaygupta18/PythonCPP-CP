#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
		ll t;
	cin>>t;
	while(t--){
	    ll n;
	cin>>n;
	ll v=0,k=0,sum;
	sum=(n*(n+1))/2;
	if(sum%2!=0){
	    cout<<'0'<<"\n";
	}
	
	else{
	    
	     v=(sqrt((4*sum)+1)-1)/2;
	     sum=sum/2;
	    
	    if((v*(v+1))/2==sum){
	        n=n-v;
	            k=((v*(v-1))/2)+((n*(n-1))/2)+n;
                cout<<k<<"\n";}
         else{
                cout<<n-v<<"\n";}
	}
	
	}
	return 0;
}

