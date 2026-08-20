#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define problem ""

void gen(ll r,ll mx, vector<ll>&cur){
    if (r==0){
        for (auto it:cur)cout<<it<<" ";
        cout<<"\n";
        return;
    }
    if (mx%2==0)mx--;
    for (ll i=mx;i>=1;i-=2){
        if (r>=i){
            cur.push_back(i);
            gen(r-i,i-2,cur);
            cur.pop_back();
        }
    }
}

int main()
{
if (fopen(problem".INP","r")){
    freopen(problem".INP","r",stdin);
    freopen(problem".OUT","w",stdout);
}
    ll n;
    cin>>n;
    vector<ll>cur;
    gen(n,n,cur);
    return 0;
}
