#include <bits/stdc++.h>

using namespace std;
vector<pair<int,int>>g[5];
void prims(int e,int src)
{
    vector<bool>vis(5,false);
  
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    pq.push({0,src});
    int ans=0;
    while(!pq.empty())
    {
        int node=pq.top().second;int weight=pq.top().first;
        pq.pop();
        if(vis[node])continue;
        ans+=weight;
        cout<<ans<<" ";
        
        
        vis[node]=true;
        for(auto child:g[node])
        {
            if(!vis[child.first])
            {
                pq.push({child.second,child.first});
            }
        }
        
    }
    cout<<ans;
    
}
int main()
{
    cout<<"enter edges";
    int e;
    cin>>e;
    for(int i=0;i<e;i++){
        int u,v,wt;
        cin>>u>>v>>wt;
        g[u].push_back({v,wt});
        g[v].push_back({u,wt});
    }
    int src;
    cout<<"enter source";
    cin>>src;
prims(e,src);
    return 0;
}
