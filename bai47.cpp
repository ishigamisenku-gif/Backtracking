#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define problem ""
ll n;
void gen(ll i, string s){
    if (i==n){
        if (s[0]=='1'&&s[1]=='1')cout<<s<<"\n";
        return;
    }
    s[i]='0';
    gen(i+1,s);
    s[i]='1';
    gen(i+1,s);
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
    cin>>n;
    string s(n,'0');
    gen(0,s);

    return 0;
}
