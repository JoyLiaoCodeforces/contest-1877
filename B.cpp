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

int n,p;
pii a[100005];
bool cmp(pii a,pii b){
    if(a.first!=b.first)return a.first<b.first;
    return a.second>b.second;
}
void solve(){
    cin>>n>>p;
    for(int i=0;i<n;i++)cin>>a[i].second;
    for(int i=0;i<n;i++)cin>>a[i].first;
    a[n]=pii(p,n);
    sort(a,a+n+1,cmp);
    int ans=0;
    for(int l=0,r=0;r<n;l++){
        while(l>=r)r++,ans+=p;
        int b=min(n-r,a[l].second);
        ans+=b*a[l].first;
        r+=b;
    }
    cout<<ans<<"\n";
}