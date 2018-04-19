#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 100009
ll st[20][mx];
ll arr[mx],n;
ll sum=0;

void init(){
    for(ll i=0;i<n;i++) st[0][i]=i;
    for(ll k=1;(1<<k)<n;k++){
        for(ll i=0;i+(1<<k)<=n;i++){
            ll x=st[k-1][i];
            ll y=st[k-1][i+(1<<k-1)];
            st[k][i]=(arr[x]>=arr[y])?x:y;
            sum+=arr[st[k][i]];
        }
    }
}

ll rmq(ll i,ll j){
    ll k=log2(j-i);
    ll x=st[k][i];
    ll y=st[k][j-(1<<k)+1];
    return arr[x]>=arr[y]?x:y;
}

int main(){
    ll T,t,q,i,j,k;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&n,&q);
        for(i=0;i<n;i++){
            scanf("%lld",&arr[i]);
        }

        init();
        printf("Case %lld:\n",t);
        for(k=1;k<=q;k++){
            ll x,y;
            scanf("%lld %lld",&x,&y);
            printf("%lld\n",arr[rmq(x-1,y-1)]);
        }

        printf("total sum=%lld\n",sum);
    }
    return 0;
}
