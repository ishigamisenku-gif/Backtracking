#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> p;

const ll mx=1e3+1;
ll n;
bool vis[mx][mx];
p par[mx][mx];
p last;
bool check(ll x, ll y){
    return (0<=x && x<n && 0<=y && y<n);
}

ll dx[]={-2,-2,-1,-1,1,1,2,2};
ll dy[]={-1,1,-2,2,-2,2,-1,1};

void dfs(ll x, ll y){
    vis[x][y]=true;
    last={x,y};
    for (int i=0;i<8;i++){
        ll u=x+dx[i];
        ll v=y+dy[i];
        if (check(u,v)&&!vis[u][v]){
            par[u][v]={x,y};
            dfs(u,v);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    memset(vis,false,sizeof(vis));
    cin>>n;
    ll x,y;cin>>x>>y;
    dfs(x,y);
    p st={x,y};
    vector<p>a;
    while (last!=st){
        p tmp=par[last.first][last.second];
        a.push_back(last);
        last=tmp;
    }
    a.push_back(st);
    reverse(a.begin(),a.end());
    for (auto it:a){
        cout<<it.first<<" "<<it.second<<"\n";
    }
    return 0;
}
