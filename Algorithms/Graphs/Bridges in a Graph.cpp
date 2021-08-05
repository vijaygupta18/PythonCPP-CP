#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define in(value) ll value; cin>>value;
#define pb push_back
#define f(x,y,z) for(ll x=y;x<z;x++)
#define rf(x,y,z) for(ll x=y;x>=z;x--)
#define inputar(ar,n) ll ar[n]; f(i,0,n) cin>>ar[i];
#define vec(name) vector<ll>name;
#define printar(arr,n) f(i,0,n) cout<<arr[i]<<" ";
#define print(val) cout<<val<<endl;
#define endl "\n"
#define printvec(vec) f(i,0,vec.size()) cout<<vec[i]<<" ";

vector<pair<int,int>>bridge;
vector<int>adj[10];

void addEdge( int u, int v) 
{ 
    adj[u].push_back(v); 
    adj[v].push_back(u); 
}

dfs(int node,int par,vector<int>&tin,vector<int>&low,vector<int>&vis,int &time){
    vis[node]=1;
    low[node]=tin[node]=time++;
    for(auto i:adj[node]){
    if(i==par)
    continue;
    if(!vis[i]){
        dfs(i,node,tin,low,vis,time);// after dfs is called then update the values and check
        low[node]=min(low[node],low[i]);
        if(low[i]>tin[node])
        bridge.pb({i,node});
    }
    else
    low[node]=min(low[node],tin[i]);

    }
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
// your code goes here
int time=0;
vector<int>tin(10,-1);        
vector<int>low(10,-1);       
vector<int>vis(10,0);
addEdge(1,2);
addEdge(1,3);
addEdge(2,3);
addEdge(3,4);
addEdge(4,5);
addEdge(4,6);
addEdge(5,6);
dfs(1,-1,tin,low,vis,time); 

for(auto i:bridge){
    cout<<"bridges are "<<i.first<<"--"<<i.second<<endl;
}
return 0;
}