// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  //Your code here 
  string s="";
  int c=0;
  for(int i=0;i<src.size();i++){
      if(i==src.size()-1 and src[i]!=src[i-1])
      cout<<src[i]<<1;
      else if(src[i]==src[i+1])
      c++;
      else{
      cout<<src[i]<<c+1;
      c=0;}
  }
  return s;
}     
 
