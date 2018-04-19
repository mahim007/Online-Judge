#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define xtra 32000
#define mxn (2*xtra)+9

ll arr[109];
ll dp[109][mxn];
ll vis[109][mxn];
ll dir[109][mxn];
map<ll,char>M;
ll t,k,n;

ll fun(ll pos,ll res){
    if(pos==n){
        return (res==k);
    }

    ll &rr=dp[pos][res+xtra];

    if(vis[pos][res+xtra]==t){
        return rr;
    }

    vis[pos][res+xtra]=t;
    rr=0;

    if(rr==0 && res%arr[pos]==0){
        dir[pos][res+xtra]=1;
        rr|=fun(pos+1,res/arr[pos]);
    }

    if(rr==0 && (res*arr[pos]>=-32000 && res*arr[pos]<=32000)){
        dir[pos][res+xtra]=2;
        rr|=fun(pos+1,res*arr[pos]);
    }

    if(rr==0 && res+arr[pos]<=32000){
        dir[pos][res+xtra]=3;
        rr|=fun(pos+1,res+arr[pos]);
    }

    if(rr==0 && res-arr[pos]>=-32000){
        dir[pos][res+xtra]=4;
        rr|=fun(pos+1,res-arr[pos]);
    }

    return rr;
}

void print_fun(ll pos,ll res){
    if(pos==n){
        return;
    }

    printf("%c%lld",M[dir[pos][res+xtra]],arr[pos]);
    ll &d=dir[pos][res+xtra];

    if(d==1){
        print_fun(pos+1,res/arr[pos]);
    }
    else if(d==2){
        print_fun(pos+1,res*arr[pos]);
    }
    else if(d==3){
        print_fun(pos+1,res+arr[pos]);
    }
    else if(d==4){
        print_fun(pos+1,res-arr[pos]);
    }
}

int main(){
    ll T,i,j;
    M[1]='/';
    M[2]='*';
    M[3]='+';
    M[4]='-';
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        for(i=0;i<n;i++) scanf("%lld",&arr[i]);
        scanf("%lld",&k);

        ll ans=fun(1,arr[0]);

        if(ans==0) printf("NO EXPRESSION\n");
        else{
            printf("%lld",arr[0]);
            print_fun(1,arr[0]);
            printf("=%lld\n",k);
        }
    }

    return 0;
}
