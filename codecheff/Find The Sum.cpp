#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 1000009
ll st[mx][30];
ll arr[mx],n;
ll sum=0;

void init(){
    for(ll i=0;i<n-1;i++) st[i][0]=(arr[i]>=arr[i+1])?i:i+1;
    for(ll i=n-1;i<29;i++) st[i][0]=n-1;
    ll lg=log2(n);
    for(ll k=1;k<=lg;k++){
        for(ll i=0;i<n;i++){
            ll x=st[i][k-1];
            ll y=st[x][k-1];
            st[i][k]=(arr[x]>=arr[y])?x:y;
            sum+=arr[st[i][k]];
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
        scanf("%lld",&n);
        for(i=0;i<n;i++){
            scanf("%lld",&arr[i]);
        }

        memset(st,-1,sizeof st);
        init();
        printf("Case %lld:\n",t);
//        for(k=1;k<=q;k++){
//            ll x,y;
//            scanf("%lld %lld",&x,&y);
//            printf("%lld\n",arr[rmq(x-1,y-1)]);
//        }

        for(i=0;i<n;i++){
            for(j=0;j<=5;j++){
                cout<<arr[st[i][j]]<<" ";
            }
            cout<<"\n";
        }

        printf("total sum=%lld\n",sum);
    }
    return 0;
}
