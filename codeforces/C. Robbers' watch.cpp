#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll x,y,dx,dy,a[10];

ll check(ll i,ll j){
    ll s1=0,s2=0;
    memset(a,0,sizeof a);
    while(i){
        a[i%7]++;
        if(a[i%7]>1) return 0;
        i=i/7;
        s1++;
    }

    while(j){
        a[j%7]++;
        if(a[j%7]>1) return 0;
        j=j/7;
        s2++;
    }

    if(dx+dy>s1+s2) a[0]+=((dx+dy)-(s1+s2));
    if(a[0]>1) return 0;
    return 1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,i,j,k,ans=0;
    cin>>n>>m;
    n--;
    m--;
    x=n;
    y=m;

    if(x==0) dx=1;
    if(y==0) dy=1;
    while(x){
        x=x/7;
        dx++;
    }

    while(y){
        y=y/7;
        dy++;
    }

    if(dx+dy>7){
        cout<<0<<"\n";
        return 0;
    }

    for(i=0;i<=n;i++){
        for(j=0;j<=m;j++){
            if(i==j) continue;
            if(check(i,j)==1){
                ans++;
            }
        }
    }

    cout<<ans<<"\n";
    return 0;
}
