#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define problem ""
typedef pair<ll,ll> p;
const ll mx=1e5+5;
const ll inf=1e18;
vector<pair<ll,ll>>adj[mx];
ll n,m;
ll dist[mx];

void dijkstra(ll x){
    priority_queue<p,vector<p>,greater<p>>pq;
    dist[x]=0;
    pq.push({0,x});
    while (!pq.empty()){
        ll w=pq.top().first;
        ll u=pq.top().second;
        pq.pop();
        if (w>dist[u])continue;
        for (auto [d,v]:adj[u]){
            if(dist[u]+d<dist[v]){
                dist[v]=dist[u]+d;
                pq.push({dist[v],v});
            }
        }
    }
}

int main()
{
if (fopen(problem".INP","r")){
    freopen(problem".INP","r",stdin);
    freopen(problem".OUT","w",stdout);
}
    cin>>n>>m;
    fill(dist,dist+n+1,inf);
    for (int i=0;i<m;i++){
        ll x,y,w;
        cin>>x>>y>>w;
        adj[x].push_back({w,y});
        adj[y].push_back({w,x});
    }
    ll res=-inf;
        dijkstra(1);

    for (int i=1;i<=n;i++){
        res=max(res,dist[i]);
    }
    cout<<res;
    return 0;
}
