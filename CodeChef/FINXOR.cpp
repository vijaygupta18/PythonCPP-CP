#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{   int test;
    cin>>test;
    while(test--)
    {vector<int>v;
        int n;
        int a=1;
        ll p=pow(2,20);
        cin>>n;
        cout<<a<<" "<<p<<"\n"<<flush;
        ll va,sum,b;
        cin>>va;
        if(va!=-1)
        sum=va-n*p;
        if(n==1){
        	int h=2;
        	cout<<h<<" "<<sum<<"\n"<<flush;
        	}
        	else{
			
        //cout<<sum<<endl;
        if(sum%2==0){
            v.push_back(0);
        }
        else{
            v.push_back(1);
        }
        //cout<<v[0]<<endl;
        for(int i=19;i>0;i--){
            b=p/(pow(2,i));
            cout<<a<<" "<<b<<"\n"<<flush;
            cin>>va;
            if(va>sum){
                va=(va-sum)/b;
                int one=(n-va)/2;
                //cout<<one<<endl;
                if(one%2==0 || one==0){
                v.push_back(0);
                }
                else{
                v.push_back(1);
                }
            }    
            else if(sum==va){
            	int num=n/2;
            	//cout<<num<<endl;
            	if(num%2==0)
                v.push_back(0);
                else
                v.push_back(1);
            }    
            else{
                va=(sum-va)/b;
                int one=(n+va)/2;
                //cout<<one<<endl;
                if(one%2==0){
                v.push_back(0);
                }
                else{
                v.push_back(1);
                }
            }    
        }
        ll c=0;
        for(int i=0;i<v.size();i++){
        	//cout<<v[i]<<endl;
            if(v[i]==1){
                c=c+pow(2,i);
            }
            
        }
        int k=2;
        cout<<k<<" "<<c<<"\n"<<flush;
        
    }
    cin>>va;
        if(va!=1)
        break;
	}
    return 0;
}