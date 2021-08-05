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



void bfs(int start){
     int ans[5];
     f(i,0,5)
     ans[i]==INT_MAX;

    std::queue<int>q;
    ans[start]=0;
    q.push(start);
    while(!q.empty()){
        int vertex=q.front();
        q.pop();
        for(auto i:adj[vertex]){
        if(ans[vertex]+1<ans[i]){
            ans[i]=ans[vertex]+1;
        q.push(i);
        }
        }
    }

    f(i,1,5)
    cout<<"distance from "<<start<<" to node "<<i<<" is: "<<ans[i]<<endl;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
// your code goes here

addEdge(1,2);
addEdge(2,3);
addEdge(3,4);
// addEdge(3,4);

bfs(1);        

return 0;
}