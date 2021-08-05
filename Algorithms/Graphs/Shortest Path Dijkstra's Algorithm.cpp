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

// firts of all create a min heap priority_queue then use those values to find the distance.
// everything we use here is bfs like algorithms

void Dijkastra(int start,int end){
    vector<int>ans(5,INT_MAX);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    ans[start]=0;
    pq.push({0,start});
    while(!pq.empty()){
        int val=pq.top().second;
        int dist=pq.top().first;
        pq.pop();
        for(auto i: adj[val]){
            if(dist+i.second<ans[i.first]){
                ans[i.first]=dist+i.second;
                pq.push({ans[i.first],i.first});
            }
        }
    }
    f(i,1,5)
    cout<<"distance from 1 to "<<i<<" is "<<ans[i]<<endl;

}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
// your code goes here

addEdge(1,2,3);
addEdge(2,3,2);
addEdge(3,4,1);
Dijkastra(1,4);
        
return 0;
}