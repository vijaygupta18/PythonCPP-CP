#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define in(value) ll value; cin>>value;
#define pb push_back
#define f(x,y,z) for(ll x=y;x<z;x++)
#define rf(x,y,z) for(ll x=y;x>=z;x--)
#define inputar(ar,n) ll ar[n]; f(i,0,n) cin>>ar[i];
// #define vec(name) vector<ll>name;
#define printar(arr,n) f(i,0,n) cout<<arr[i]<<" ";
#define print(val) cout<<val<<endl;
#define endl "\n"
#define printvec(vec) f(i,0,vec.size()) cout<<vec[i]<<" ";

struct node{
    int u;
    int v;
    int wt;
    node(int uu,int vv,int w){
         u=uu;
         v=vv;
         wt=w;

    }
};


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
// your code goes here
vector<node>edges;
vector<int>vec(7,1e9);
vec[1]=0;
edges.pb(node(3,2,6));
edges.pb(node(5,3,1));
edges.pb(node(1,5,-3));
edges.pb(node(1,2,-2));
edges.pb(node(3,4,-2));
edges.pb(node(2,4,3));
f(it,1,5){
    for(auto i:edges){// relaxation
        if(vec[i.u]+i.wt<vec[i.v])
        vec[i.v]=vec[i.u]+i.wt;
    }
} 

int f=0;
for(auto i:edges){
    if(vec[i.u]+i.wt<vec[i.v]){
        cout<<"negative cycle";
        f=1;
        break;
    }

}      
if(!f){
    f(i,1,6){
        cout<<i<<" "<<vec[i]<<endl;
    }
}


return 0;
}