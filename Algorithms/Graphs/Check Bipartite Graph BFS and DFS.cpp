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

vector<int>adj[10];
bool visited[50]={0};
int color[50]={-1};

void addEdge( int u, int v) 
{ 
    adj[u].push_back(v); 
    adj[v].push_back(u); 
}
// using dfs approach
bool dfs(int start,int col) {
    color[start] =1-col;
    for(auto i:adj[start]){
        if(color[i]==-1){
             if(!dfs(i,color[start])) return false;}
        else if(color[start]==color[i])
        return false;     
        }
        return true;
    }
bool bfs(int start){

    std::queue<int>q;
    color[start]=0;
    q.push(start);
    while(!q.empty()){
        int vertex=q.front();
        q.pop();
        for(auto i:adj[vertex]){
        if(color[i]==-1){
        color[i]=1-color[vertex];
        q.push(i);}
        else if(color[i]==color[vertex])
        return false;
        }        
    }
    return true;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
memset(color,-1,sizeof(color));
addEdge(1,2);
addEdge(2,3);
addEdge(2,4);
addEdge(3,4);

cout<<dfs(1,0);
// your code goes here
        
return 0;
}