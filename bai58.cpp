#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define problem ""


int main()
{
if (fopen(problem".INP","r")){
    freopen(problem".INP","r",stdin);
    freopen(problem".OUT","w",stdout);
}
    vector<pair<ll,ll>>res;
    ll n,s;cin>>n>>s;
    vector<ll>a(n);
    vector<ll>pref(n+1,0);
    for (int i=0;i<n;i++){
        a[i]=i+1;
        if (i==0)pref[i]=a[i];
        else pref[i]=pref[i-1]+a[i];
    }
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (pref[j]-pref[i]==s){
                res.push_back({i,j});
            }
        }
    }
    for (auto it:res){
        cout<<it.first<<" "<<it.second<<"\n";
    }
    return 0;
}
