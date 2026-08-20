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
    ll n,t;
    cin>>n>>t;
    vector<ll>a(n);
    for (int i=0;i<n;i++)cin>>a[i];
    for (int i=0;i<n;i++){
        ll minv=a[i],maxv=a[i];
        for (int j=i;j<n;j++){
            maxv=max(a[j],maxv);
            minv=min(a[j],minv);
            if (maxv-minv>t)break;
            for (int k=i;k<=j;k++){cout<<a[k]<<" ";}
            cout<<"\n";
        }
    }
    return 0;
}

