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

void make_set(){
    f(i,0,200)
    parent[i]=i,
    rankof[i]=0;
}

int find_parent(int node){
    if(node==parent[node])
    return node;
    return parent[node]=find_parent(parent[node]);
    // path compression
    //4->3->2->1
    // 4->1
}

void unionpair(int u,int v){
    if(rankof[u]<rankof[v])
    parent[u]=v;
    else if(rankof[v]<rankof[u])
    parent[v]=u;
    else
    parent[v]=u,rankof[u]+=1;
}


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
// your code goes here
make_set();
unionpair(1,2);
unionpair(2,3);
unionpair(4,5);
unionpair(5,6);
cout<<find_parent(6)<<endl;

if(find_parent(2)==find_parent(5))
cout<<true;
else 
cout<<false;



        
return 0;
}