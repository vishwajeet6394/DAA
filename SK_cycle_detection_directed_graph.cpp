#include<bits/stdc++.h>
using namespace std;

bool checkcycle(int node,vector<int>adj[],int n,int vis[],int dfsvis[])
{
    vis[node]=1;
    dfsvis[node]=1;
    for(auto it:adj[node])
    {
        if(!vis[it])
        {
            if(checkcycle(it,adj,n,vis,dfsvis))
            {
                return true;
            }
        }
        else if(dfsvis[it])
        {
            return true;
        }
    }
    return false;
}

bool iscycle(vector<int>adj[],int n)
{
    int vis[n];
    int dfsvis[n];
    memset(vis,0,sizeof vis);
    memset(dfsvis,0,sizeof dfsvis);
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            if(checkcycle(i,adj,n,vis,dfsvis))
            {
                return true;
            }
        }
        
    }
    return false;
}

int main()
{
    int n,e;
    cin>>n>>e;
    vector<int>adj[e];
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    if(iscycle(adj,n))
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}