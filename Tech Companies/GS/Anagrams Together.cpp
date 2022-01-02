// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        vector<string>vec;
        vector<vector<string>>v;
        unordered_map<string,int>m;
        for(auto i:string_list){
            string s=i;
        sort(s.begin(),s.end());
        // m[s]++;
        vec.push_back(s);
        }
        for(int i=0;i<vec.size();i++){
            if(!m[vec[i]]){
                m[vec[i]]++;
                vector<string>s;
            for(int j=i;j<vec.size();j++){
                if(vec[i]==vec[j]){
                s.push_back(string_list[j]);}
            }
            v.push_back(s);
            }
        }

        //code here
        return v;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
  // } Driver Code Ends
