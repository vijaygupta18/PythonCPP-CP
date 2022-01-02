// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
// 	ull maxdev(ull a,ull b){
// 	    while(a%b==0)
// 	    a=a/b;
// 	    return a;
// 	}
// 	bool check(ull a){
// 	    a=maxdev(a,2);
// 	    a=maxdev(a,3);
// 	    a=maxdev(a,5);
// 	    if(a==1) return true;
// 	    else return false;
// 	}
	ull getNthUglyNo(int n) {
	    ull u5=0;
	    ull u2=0;
	    ull u3=0;
	    ull a[n];
	    ull n2=2;
	    ull n3=3;
	    ull n5=5;
	    ull nu=1;
	    a[0]=1;
	    for(int i=1;i<n;i++){
	        
	        
	        n2=a[u2]*2;
	        n3=a[u3]*3;
	        n5=a[u5]*5;
	        
	        nu=min(min(n2,n3),n5);
	       
	        a[i]=nu;
	        
	        if(nu==n2)
	        u2++;
	        
	        if(nu==n3)
	        u3++;
	        
	        if(nu==n5)
	        u5++;
	        
	    }
	    return nu;
	   // while(c<n){
	   //     i++;
	   //     if(check(i))
	   //     c++;
	   // }
	   // return i;
	    // code here
	    
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
