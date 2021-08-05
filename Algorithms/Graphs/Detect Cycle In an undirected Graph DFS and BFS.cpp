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

bool bfs(int start){
    std::queue<pair<int,int>>q;
    visited[start]=true;
    q.push({start,-1});
    while(!q.empty()){
        int vertex=q.front().first;
        int parent=q.front().second;
        q.pop();
        for(auto i:adj[vertex]){
        if(!visited[i]){
        q.push({i,vertex});
        visited[i]=true;}
        else if(parent!=i)
        return true;
        }
                
    }
    return false;
}

// bool dfs(int start){
//     stack<pair<int,int>>s;
//     visited[start]=true;
//     s.push({start,-1});
//     while(!s.empty()){
//     int vertex=s.top().first;
//     int par=s.top().second;
//     if(!visited[vertex])    
//     visited[vertex]=true;
//     s.pop();
//         for(auto i:adj[vertex]){
//         if(!visited[i])
//         s.push({i,vertex});
//         else if(par!=i)
//         return true;
//     }      
//     }
//     return false;
// }

//using dfs recursion
bool dfs(int start,int parent) {
    visited[start] = true;
    for(auto i:adj[start]){
        if(!visited[i]){
             if(dfs(i,start)) return true;}
        else if(i!=parent) return true;     
        }
        return false;
    }


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
// your code goes here
addEdge(1,2);
addEdge(2,3);
addEdge(2,4);
// addEdge(3,4);
cout<<dfs(1,-1);

        
return 0;
}