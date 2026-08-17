#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define problem ""

ll n;
vector<ll> cur;
vector<bool> vis;

void gen(ll k){
    if(cur.size()==k){
        for(int i=0;i<cur.size();i++) cout<<cur[i]<<(i==cur.size()-1?"":" ");
        cout<<"\n";
        return;
    }
    for(int i=1;i<=n;i++){
        if(vis[i]) continue;
        vis[i]=true;
        cur.push_back(i);
        gen(k);
        cur.pop_back();
        vis[i]=false;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    if(fopen(problem".INP","r")){
        freopen(problem".INP","r",stdin);
        freopen(problem".OUT","w",stdout);
    }
    cin>>n;
    vis.assign(n+1,false);
    gen(n);
    return 0;
}
