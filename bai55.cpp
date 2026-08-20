#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define problem ""

ll n;
vector<ll> col;
vector<bool>c_used,d1_used,d2_used;

void print_board(){
    vector<string> b(n, string(n, '*'));
    for(int r=0;r<n;r++) b[r][col[r]]='Q';
    for(int r=0;r<n;r++){
        for(int c=0;c<n;c++) cout<<b[r][c]<<(c==n-1?"":" ");
        cout<<"\n";
    }
    cout<<"\n";
}

void dfs(int r){
    if(r==n){
        print_board();
        return;
    }
    for(int c=0;c<n;c++){
        if(!c_used[c] && !d1_used[r-c+n] && !d2_used[r+c]){
            col[r]=c;
            c_used[c]=d1_used[r-c+n]=d2_used[r+c]=1;
            dfs(r+1);
            c_used[c]=d1_used[r-c+n]=d2_used[r+c]=0;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if(fopen(problem".INP","r")){
        freopen(problem".INP","r",stdin);
        freopen(problem".OUT","w",stdout);
    }cin>>n;
        col.resize(n);
        c_used.assign(n, 0);
        d1_used.assign(2*n, 0);
        d2_used.assign(2*n, 0);
        dfs(0);
    return 0;
}
