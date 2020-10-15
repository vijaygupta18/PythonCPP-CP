#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
ll arrset[200001];
ll arr[200001][6] = {0};

//finding all the pairs

ll findpair(ll v){
    if(arrset[v]==-1)
    return v;
    return arrset[v]=findpair(arrset[v]);
}

//boolean array

bool differ(const pair<ll,pair<ll,ll>>&vec1,const pair<ll, pair<ll, ll>>&vec2)
{
 if(vec1.first > vec2.first)
 return 1;
 else
 return 0;
}


ll findmax(ll aar1[6],ll n,ll d){
    ll range=-2147483648,minran=0;
    for(ll i=0;i<n;i++){
        ll newval=0;
        for(ll j=0;j<d;j++)
        newval=newval+(1-2*aar1[j])*arr[i][j];
        if(newval>range){
            range=newval;
            minran=i;
        }
    }
return minran;
}


ll distance(ll p,ll q,ll r){
    ll di=0;
 for (ll i=0;i<r;i++)
 {
  di=di+abs(arr[p][i]-arr[q][i]);
 }
return di;
}


int main(){
    ll n,d;
    cin>>n>>d;
    vector<pair<ll,pair<ll,ll>>>graph;
    memset(arrset,-1,sizeof(arrset));
    ll i=0,j=0,max=0,ans=0;
    for(i=0;i<n;i++)
    for(j=0;j<d;j++)
    cin>>arr[i][j];
    ll a=2<<d;
    ll arrd[a];
    for(i=0;i<1<<d;i++){
        ll aar1[6]={0};
        for(j=0;j<d;j++){
            if(i&1<<j)
            aar1[j]=1;
        }
        arrd[i]=findmax(aar1,n,d);
    }
    for(i=0;i<n;i++){
        for(j=0;j<1<<d;j++){
            ll val=distance(i,arrd[j],d);
            graph.pb({val,{i,arrd[j]}});
        }
    }
    sort(graph.begin(),graph.end(),differ);
    for(i=0;i<graph.size();i++){
        ll val1=findpair(graph[i].second.first);
        ll val2=findpair(graph[i].second.second);
        if(val1!=val2){
            ans=ans+graph[i].first;
            arrset[val1]=val2;
        }
    }
    cout<<ans<<endl;
    return 0;
    
}
