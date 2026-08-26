#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define problem ""


const ll mx=1e5+5;
ll n,m;
ll s,d;
vector<ll>adj[mx];
bool vis[mx];

void dfs(ll u,vector<ll>&p){
    vis[u]=true;
    if (u==d){
        for (auto it:p)cout<<it<<" ";
        cout<<"\n";
    }
    for (ll v:adj[u]){
        if (!vis[v]){
            p.push_back(v);
            dfs(v,p);
        }
    }
    vis[u]=false;
    p.pop_back();
}

int main()
{
if (fopen(problem".INP","r")){
    freopen(problem".INP","r",stdin);
    freopen(problem".OUT","w",stdout);
}
    cin>>n>>m>>s>>d;
    fill(vis,vis+n+1,false);
    for (int i=0;i<m;i++){
        ll x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<ll>p;
    p.push_back(s);
    dfs(s,p);
    return 0;
}
