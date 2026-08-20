#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define problem ""
ll n;

void gen(ll i,string s){
    if(i==n){
        for (int k=1;k<n;k++){
            if (s[k]==s[k-1]){
                return;
            }
        }
        cout<<s<<"\n";
        return;
    }
    s[i]='A';
    gen(i+1,s);
    s[i]='B';
    gen(i+1,s);
    s[i]='C';
    gen(i+1,s);
}

int main()
{
if (fopen(problem".INP","r")){
    freopen(problem".INP","r",stdin);
    freopen(problem".OUT","w",stdout);
}
    cin>>n;
    string s(n,'A');
    gen(0,s);
    return 0;
}
