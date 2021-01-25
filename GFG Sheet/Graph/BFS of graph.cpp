// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
public:
	vector<int>bfsOfGraph(int V, vector<int> adj[]){
	    
	        bool visited[V+1];
    memset(visited,false,sizeof(visited));
    std::list<int>q;
    std::vector<int>l;
    visited[0]=true;
    q.push_back(0);
    l.push_back(0);
    while(!q.empty()){
        int vertex=q.front();
       //cout<<vertex<<endl;
        q.pop_front();
        for(auto i:adj[vertex]){
        if(!visited[i]){
        q.push_back(i);
        l.push_back(i);}
        visited[i]=true;}
        
    }
    
    return l;
	    
	    
	    
	    
	    // Code here
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    // 		adj[v].push_back(u);
    	}
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int>ans=obj.bfsOfGraph(V, adj);
        for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}  // } Driver Code Ends
