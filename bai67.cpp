#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define problem ""

typedef pair<ll,ll> p;
 ll n,m;
vector<p>a;
ll  mx=0;
void knapsack(ll w,ll val,ll i){
    if (w<=m){
        mx=max(val,mx);
    }
    if (w>=m||i>=n)return;
    if (w+a[i].first<m){knapsack(w+a[i].first,val+a[i].second,i+1);}
    knapsack(w,val,i+1);
}

int main()
{
if (fopen(problem".INP","r")){
    freopen(problem".INP","r",stdin);
    freopen(problem".OUT","w",stdout);
}
    cin>>n>>m;
    a.resize(n);
    for (int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
//    vector<ll>dp(n,0);
//    for (int i=0;i<n;i--){
//        for (int j=m;j>=a[i].first;j++){
//            dp[i]=max(dp[j],dp[j-a[i].first]+a[i].second);
//        }
//    }
//    cout<<dp[n];
    knapsack(0,0,0);
    cout<<mx;
    return 0;
}
