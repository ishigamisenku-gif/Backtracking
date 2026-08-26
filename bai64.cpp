#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define problem ""

const ll mx=1e3+5;
ll a[mx][mx];
bool vis[mx][mx];
ll n;
const ll dx[]={-1,1,0,0};
const ll dy[]={0,0,-1,1};
const char dir[]={'U','D','L','R'};

bool check(ll x, ll y){return (0<=x && x<n && 0<=y && y<n);}


void dfs(ll x, ll y,vector<char>&p){
    vis[x][y]=true;
    for(int i=0;i<4;i++){
        ll cx=x+dx[i];
        ll cy=y+dy[i];
        if (check(cx,cy)&&a[cx][cy]!=1&&!vis[cx][cy]){
            p.push_back(dir[i]);
            vis[cx][cy]=true;
            dfs(cx,cy,p);
        }
    }
}

int main()
{
if (fopen(problem".INP","r")){
    freopen(problem".INP","r",stdin);
    freopen(problem".OUT","w",stdout);
}
    cin>>n;
    memset(a,0,sizeof(a));
    memset(vis,false,sizeof(vis));
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++)cin>>a[i][j];
    }
    vector<char>p;
    dfs(0,0,p);
    for (auto it:p)cout<<it<<" ";
    return 0;
}
