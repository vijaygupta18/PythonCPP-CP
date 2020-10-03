#include<bits/stdc++.h>
using namespace std;
int main()
{   int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int> value;
        vector<pair<int,float>>vec[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i<j && a[i]>a[j])
                {
                    vec[i].push_back(make_pair(j,float(j-i)/(a[i]-a[j])));
                }               
                else
                if(i>j && a[i]<a[j])
                {
                    vec[i].push_back(make_pair(j,float(i-j)/(a[j]-a[i])));
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            queue<pair<int,float>>line;
            set<int>sets ;
            sets.insert(i);
            for(auto j:vec[i])
            {
                line.push({j.first,j.second});
            }
            while(!line.empty())
            {
                int top=line.front().first;
                float t;
                t=line.front().second;
                line.pop();
                if(sets.find(top)==sets.end())
                {
                    sets.insert(top);
                }
                for(auto j:vec[top])
                {
                    if(j.second>=t &&(sets.find(j.first)==sets.end()))
                    {
                        line.push({j.first,j.second});        
                    }
                }
            }
            value.push_back(sets.size());   
        }
        cout<<*min_element(value.begin(),value.end())<<" "<<*max_element(value.begin(),value.end())<<"\n";
    }
}