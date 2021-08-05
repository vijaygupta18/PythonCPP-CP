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

int parent[200];
int rankof[200];

struct node{
    int wt,u,v;
    node(int wtt,int uu,int vv){
        wt=wtt;
        u=uu;
        v=vv;
    }
};

bool comparator(node a,node b){
    return (a.wt<b.wt);
}

void make_set(){
    f(i,0,200)
    parent[i]=i,rankof[i]=0;
    }
int find_parent(int n){
    if(n==parent[n])
    return n;
    return parent[n]=find_parent(parent[n]);
}    
void unionpair(int u,int v){
    if(rankof[u]<rankof[v])
    parent[u]=v;
    else if(rankof[u]>rankof[v])
    parent[v]=u;
    else
    parent[v]=u,rankof[u]++;
}


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
vector<pair<int,int>>mst;
int minwt=0;
// your code goes here
vector<node>edges;
make_set();
edges.pb(node(4,1,2));        
edges.pb(node(3,2,4));        
edges.pb(node(13,2,5));        
edges.pb(node(1,3,5));        
edges.pb(node(2,2,3));
sort(edges.begin(),edges.end(),comparator);
for(auto i:edges){
    if(find_parent(i.u)!=find_parent(i.v)){
        minwt+=i.wt;
        mst.pb({i.u,i.v});
        unionpair(i.u,i.v);
    }
}

cout<<"MIn cost is "<<minwt<<endl;
for(auto i:mst){
    cout<<"pairs are "<<i.first<<"--"<<i.second<<endl;
}
cout<<find_parent(1);
return 0;
}