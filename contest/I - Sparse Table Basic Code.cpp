#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lim 100009
#define inf 10000000000
ll arr[lim],tree[lim*4];

void init(ll indx,ll st,ll ed){ //cout<<"indx:"<<indx<<" st:"<<st<<" ed:"<<ed<<endl;system("pause");
    if(st==ed){
        tree[indx]=arr[st];
        return;
    }

    ll LEFT=2*indx;
    ll RIGHT=LEFT+1;
    ll mid=(st+ed)/2;
    init(LEFT,st,mid);
    init(RIGHT,mid+1,ed);
    tree[indx]=min(tree[LEFT],tree[RIGHT]);
}

ll query(ll node,ll st,ll ed,ll i,ll j){
    if(i>ed || j<st) return inf;
    if(i>=st && j<=ed) return tree[node];
    ll LEFT=node*2;
    ll RIGHT=LEFT+1;
    ll mid=(i+j)/2;
    ll p1=query(LEFT,st,ed,i,mid);
    ll p2=query(RIGHT,st,ed,mid+1,j);
    return min(p1,p2);
}

int main(){
    ll T,t,n,q,i,j;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&n,&q);
        for(i=1;i<=n;i++){
            scanf("%lld",&arr[i]);
        }
        printf("Case %lld:\n",t);
        init(1,1,n);
        for(i=1;i<=q;i++){
            ll m,p;
            scanf("%lld %lld",&m,&p);
            printf("%lld\n",query(1,m,p,1,n));
        }
    }
    return 0;
}
