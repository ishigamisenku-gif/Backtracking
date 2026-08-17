#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define problem ""
ll n;
ll c=0;
void gen(const vector<string>&a, ll k,vector<string>cur){
    if (cur.size()==k){
        for (int i=0;i<cur.size();i++)cout<<cur[i]<<" ";
        cout<<"\n";
        c++;
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
    vector<string>a(n);
    for (int i=0;i<n;i++)cin>>a[i];
    vector<string>cur;
    for (int i=1;i<=n;i++){
        gen(a,i,cur);

    }
   // cout<<c;
    return 0;
}
