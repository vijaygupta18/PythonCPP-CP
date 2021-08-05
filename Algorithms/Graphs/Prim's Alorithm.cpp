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



vector<pair<int,int>>adj[10];
bool visited[50]={0};

void addEdge( int u, int v,int w) 
{ 
    adj[u].push_back({v,w}); 
    adj[v].push_back({u,w}); 
}

void prims(int start){
    int key[6],parent[6];
    bool mst[6];
    f(i,0,6)
    key[i]=INT_MAX,parent[i]=-1,mst[i]=false;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    
    pq.push({0,start});
    key[start]=0;

    while(!pq.empty()){
        int v=pq.top().second;
        // int weight=pq.top.first;
        pq.pop();
        mst[v]=true;
        for(auto i:adj[v]){
            int val=i.first;
            int weight=i.second;
            if(mst[val]==false and weight<key[val]){
            parent[val]=v;
            key[val]=weight;
            pq.push({key[val],val});}
        }

    }
    f(i,1,5)
    cout<<parent[i]<<" is parent of "<<i<<" with weight "<<key[i]<<endl;
}

void prim_algorithm(int start){
    int key[6],parent[6];
    bool mst[6];
    f(i,0,6)
    key[i]=INT_MAX,parent[i]=-1,mst[i]=false;

    key[start]=0;
    f(i,1,5){
        int mini=INT_MAX,u;
        f(i,1,6){
            if(key[i]<mini and mst[i]==false)
            mini=key[i],u=i;
        }
        mst[u]=true;
        for(auto i:adj[u]){
            int val=i.first;
            int weight=i.second;
            if(mst[val]==false and weight<key[val])
            parent[val]=u,key[val]=weight;
        }

    }
    f(i,1,5)
    cout<<parent[i]<<" is parent of "<<i<<" with weight "<<key[i]<<endl;

}


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
// your code goes here

addEdge(1,2,3);
addEdge(1,2,1);
addEdge(2,3,2);
addEdge(3,4,1);
prims(1);
        
return 0;
}