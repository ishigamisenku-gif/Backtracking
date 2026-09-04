#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define problem ""

typedef pair<ll,ll> p;
const ll mx=1e3;
vector<p>adj[mx];
ll n,m;
const ll inf=1e18;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    if (fopen(problem".INP","r")){
        freopen(problem".INP","r",stdin);
        freopen(problem".OUT","w",stdout);
    }
    cin>>n>>m;
    for (int i=0;i<m;i++){
        ll x,y,w;
        cin>>x>>y>>w;
        adj[x].push_back({y,w});
    }
    vector<ll>a(n);
    for (int i=0;i<n;i++)a[i]=i;
    vector<vector<ll>>d(n,vector<ll>(n,inf));
    for (int i=0;i<n;i++){
        for (p e:adj[i])d[i][e.first]=min(d[i][e.first],e.second);
    }
    ll ans=inf;
    vector<ll>best;
    do{
        ll cur=0;
        bool ok=true;
        for (int i=0;i<n;i++){
            ll w=d[a[i]][a[(i+1)%n]];
            if (w==inf){
                ok=false;
                break;
            }
            cur+=w;
        }
        if (ok&&cur<ans){
            best=a;
            ans=cur;
        }
    }
    while (next_permutation(a.begin()+1,a.end()));
    if (ans==inf){
        cout<<-1<<"\n";
        return 0;
    }
    cout<<ans<<"\n";
    for (int i=0;i<n;i++)cout<<best[i]<<(i==n-1?"":" ");
    return 0;
}
