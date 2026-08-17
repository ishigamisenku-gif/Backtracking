#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define problem ""

ll n;
void gen(ll i,string s){
    if (i==n){
        cout<<s<<"\n";
        return;
    }
    for (int j=0;j<=9;j++){
        s[i]=(j+'0');
        gen(i+1,s);
    }
}

int main()
{
if (fopen(problem".INP","r")){
    freopen(problem".INP","r",stdin);
    freopen(problem".OUT","w",stdout);
}
    cin>>n;
    string s(n,'0');
    gen(0,s);
    return 0;
}
