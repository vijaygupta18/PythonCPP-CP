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
int indegree[50]={0};
bool dfsvisited[50]={0};
int color[50]={-1};
stack<int>s;

void addEdge( int u, int v) 
{ 
    adj[u].push_back(v);  
}


//  cylce detection using dfs in directed graph-----------------************------------


bool dfs(int start) {
    visited[start] = true;
    dfsvisited[start]=true;
    for(int i:adj[start]){
        if(!visited[i]){
             if(dfs(i))return true;}
        else if(dfsvisited[i]) return true;     
        }
    dfsvisited[start]=false;
    return false;    

    }

bool check_cycle(){
    for(int i=1;i<5;i++){
        if(!visited[i]){
            if(dfs(i)) return true;
        }
    }
    return false;
}

// ---------------------*****************-----------------ended here



// dfs topological sort part ------------///////

void ddfs(int start) {
    visited[start] = true;
    for(int i:adj[start]){
        if(!visited[i])
             ddfs(i);
        }
        s.push(start);
    }

// topological sort: liner ordering of vertices u->v such that u is always before v;
void toposort(){
    for(int i=1;i<5;i++){
        if(!visited[i]){
            ddfs(i);
        }
    }
    
    while(!s.empty()){
    cout<<s.top()<<" ";

    s.pop();}
}

/////// --------------dfs topo ended-------******



//  ----- kahn's algorith to find topo sort using bfs---------****



void bfstoposort(){  
    for(int i=1;i<6;i++)
    for(auto it:adj[i])
    indegree[it]++;

    queue<int>ss;  
    queue<int>q;
    for(int i=1;i<6;i++)
    if(indegree[i]==0)
    q.push(i);
    while(!q.empty()){
        int v=q.front();
        q.pop();
        ss.push(v);
        for(auto i:adj[v]){
            indegree[i]--;
            if(indegree[i]==0)
            q.push(i);
        }
    }
    while(!ss.empty()){
    cout<<ss.front()<<" ";
    ss.pop();}


}


// ----------------********ended here____________------------------

// -------------------*** bfs approach too detect cycle in directed graph **-----------



bool bfstoposortcycle(){  
    for(int i=1;i<6;i++)
    for(auto it:adj[i])
    indegree[it]++;

    queue<int>ss;  
    queue<int>q;
    for(int i=1;i<6;i++)
    if(indegree[i]==0)
    q.push(i);
    int count=0;
    while(!q.empty()){
        int v=q.front();
        q.pop();
        count++;
        ss.push(v);
        for(auto i:adj[v]){
            indegree[i]--;
            if(indegree[i]==0)
            q.push(i);
        }
    }
if(count==5)
return false;
return true;


}

// ------------------*****ended here bfs topo cycle*----------------------


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
// your code goes here
addEdge(1, 2);
addEdge(2, 3);
addEdge(3, 1);
addEdge(3, 4);
addEdge(4, 5);
cout<<bfstoposortcycle();
// bfstoposort();

        
return 0;
}