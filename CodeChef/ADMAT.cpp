#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++){
	    for(int j=0;j<n;j++){
	        cin>>a[i][j];
	    }
	}
	int k=0;
	int flag=0;
	for(int i=n-1;i>0;i--){
	    if(flag==1&&a[i][0]!=(i+1)){
	        k++;
	        flag=0;
	    }
	   else if(flag==0&&a[0][i]!=(i+1)){
	       k++;
	       flag=1;
	   }
	}
	cout<<k<<"\n";
	}
	return 0;
}
