#include <bits/stdc++.h>

using namespace std;
vector<pair<int, pair<int, int>>> g; 
int parent[5];
int Rank[5];

void make(int a)
{
    parent[a]=a;
    Rank[a]=0;
}
int find(int a)
{
    if(parent[a]==a)return parent[a];
    else find(parent[a]);
}
void unionn(int a,int b)
{
    if(find(a)==find(b))return;
    if(Rank[a]>Rank[b])
    {
        parent[b]=a;
       
    }
    else if(Rank[a]<Rank[b])
    {
        parent[a]=b;
       
    }
    else{
        parent[b]=a;
        Rank[a]++;
    }
}
int main()
{
    int edges;
    cin>>edges;
    int ans=0;
    for(int i=0;i<edges;i++)
    {
        int u,v,wt;
        cin>>u>>v>>wt;
       g.push_back({wt,{u,v}});
    }
    for(int i=0;i<5;i++)
    {
        make(i);
    }
    sort(g.begin(),g.end());
    for(auto it:g)
    {
        int w=it.first;
        int u=it.second.first;
        int v=it.second.second;
        if(find(u)==find(v))continue;
        unionn(u,v);
        ans+=w;
    }
    cout<<ans;
}
