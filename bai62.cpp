#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define problem ""

ll m,n;
const ll mx=1e3+5;
bool vis[mx][mx];

const ll dx[]={-1,1,0,0};
const ll dy[]={0,0,-1,1};
bool check(ll x, ll y){return (0<=x && x<m && 0<=y && y<n);}
typedef pair<ll,ll> p;

void dfs(ll x, ll y,vector<p>&a){
    a.push_back({x,y});
    vis[x][y]=true;
    if (x==m-1&&y==n-1){
        for (auto it:a){
            cout<<"( "<<it.first<<" "<<it.second<<") ";
        }
        cout<<"\n";
    }
    else {
    for (int i=0;i<4;i++){
        ll cx=x+dx[i];
        ll cy=y+dy[i];
        if (check(cx,cy)&&!vis[cx][cy])dfs(cx,cy,a);
    }
    }
    vis[x][y]=false;
    a.pop_back();
}

int main()
{
if (fopen(problem".INP","r")){
    freopen(problem".INP","r",stdin);
    freopen(problem".OUT","w",stdout);
}
    cin>>m>>n;
    vector<p>a;
    dfs(0,0,a);
    return 0;
}
