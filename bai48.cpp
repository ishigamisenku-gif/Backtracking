#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define problem ""
ll n;
void gen(const vector<ll>&a, ll k,vector<ll>cur){
    if (cur.size()==k){
        for (int i=0;i<cur.size();i++)cout<<cur[i]<<" ";
        cout<<"\n";
        return;
    }
    for (int i=0;i<a.size();i++){
        cur.push_back(a[i]);
        gen(a,k,cur);
        cur.pop_back();
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
if (fopen(problem".INP","r")){
    freopen(problem".INP","r",stdin);
    freopen(problem".OUT","w",stdout);
}
    cin>>n;ll k;cin>>k;
    vector<ll>a(n);
    for (int i=0;i<n;i++)cin>>a[i];
    vector<ll>cur;
    gen(a,k,cur);
    return 0;
}
