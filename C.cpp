#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define int ll
using pii=pair<int,int>;

void solve();
signed main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;
    cin>>t;
    while(t--)solve();
}

void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    if(k==1)cout<<"1\n";
    else if(k==2)cout<<n-1+m/n<<"\n";
    else if(k==3)cout<<m-n+1-m/n<<"\n";
    else cout<<"0\n";
}