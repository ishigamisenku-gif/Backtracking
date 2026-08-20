#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define problem ""

// 0: hs nam
// 1:hs nu
int main()
{
if (fopen(problem".INP","r")){
    freopen(problem".INP","r",stdin);
    freopen(problem".OUT","w",stdout);
}
    ll n;
    cin>>n;
    string s(n,'0');
    string s1(n,'1');
    s+=s1;
    do{
        bool ok=true;
        for (int i=1;i<s.size();i++){
            if (s[i]==s[i-1]){
                ok=false;break;
            }
        }
    if (!ok)continue;
        cout<<s<<"\n";
    }
    while (next_permutation(s.begin(),s.end()));
    return 0;
}
