#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define problem ""

ll n;

bool check(string s){
    for (int i=1;i*2<s.length();i++){
        string s1=s.substr(n-i,i);
        string s2=s.substr(n-2*i,i);
        if (s1==s2)return false;
    }
    return true;
}

void gen(ll i,string s){
    if (i==n){
        if(check(s))cout<<s<<"\n";
        return;
    }
    s[i]='0';
    gen(i+1,s);
    s[i]='1';
    gen(i+1,s);
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
