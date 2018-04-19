#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000003
#define lim 1000009
ll arr[lim];

ll bigmod(ll b,ll p){
    ll num=1;
    while(p>0){
        if(p&1){
            num=(num*b)%mod;
        }
        b=(b*b)%mod;
        p=p>>1;
    }
    return num;
}

int main(){
    ll T,t,i,j,k,n,r,res,d,e;
    scanf("%lld",&T);
    arr[0]=1;
    for(i=1;i<lim;i++){
        arr[i]=i*arr[i-1];
        arr[i]=arr[i]%mod;
    }

    for(t=1;t<=T;t++){
        scanf("%lld %lld",&n,&r);
        d=(n-r)>r?(n-r):r;
        res=arr[n]; //cout<<res<<endl;
        k=((arr[d]%mod)*(arr[n-d]%mod))%mod; //cout<<k<<endl;
        ll x=bigmod(k,mod-2);
        res=((res%mod)*(x%mod))%mod;
        printf("Case %lld: %lld\n",t,res);
    }
    return 0;
}//1000000007
