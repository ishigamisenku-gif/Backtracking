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
    ll n;
    cin>>n;
    string s(n,'(');
    string s1(n,')');
    s+=s1;
    do{
        cout<<s<<"\n";
    }
    while (next_permutation(s.begin(),s.end()));
    return 0;
}
