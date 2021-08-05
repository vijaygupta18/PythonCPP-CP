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
int color[50]={-1};
void addEdge( int u, int v,int w) 
{ 
    adj[u].push_back({v,w}); 
}

// in DAG the distance finding approach is same as of undirected graph only
//  difference is that first we create a topological sorted stack and then find the distance of each node from stack

void toposort(int start,stack<int> &st){
    visited[start]=true;
    for(auto i: adj[start]){
        if(!visited[i.first]){
            toposort(i.first,st);
        }
    }
    st.push(start);
    // cout<<st.top()<<endl;
}

void shortestpath(int start,int end){
    int ans[5];
    stack<int>s;
    f(i,0,5)
    ans[i]=INT_MAX;
    f(i,1,5){
        if(!visited[i])
        toposort(i,s);
    }
    ans[start]=0;
    while(!s.empty()){
        int val=s.top();
        s.pop();
        if(ans[val]!=INT_MAX){
            for(auto i:adj[val]){
                if(ans[val]+i.second<ans[i.first]){
                    ans[i.first]=ans[val]+i.second;
                    // cout<<ans[i.second]<<endl;
                    // cout<<val<<endl;
                }
            }
        }
    }
    cout<<ans[end];
    

}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
// your code goes here

addEdge(1,2,3);
addEdge(2,3,2);
addEdge(3,4,1);
// addEdge(3,4);
shortestpath(1,4);
       

return 0;
}