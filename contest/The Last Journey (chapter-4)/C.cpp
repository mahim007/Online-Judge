///Bismillahir Rahmanir Rahim

#include<cstdio>
#include<iomanip>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<algorithm>
#include<string>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<sstream>
#include<stack>
#include<list>
#include<iostream>
#include<assert.h>
#include<bits/stdc++.h>
using namespace std;


/**Sync off with stdio**/
#define __ cin.sync_with_stdio(false);\
           cin.tie();

/**Define Bitwise operation**/
#define check(n, pos) (n & (1ll<<(pos)))
#define biton(n, pos) (n | (1ll<<(pos)))
#define bitoff(n, pos) (n & ~(1ll<<(pos)))

typedef long long int ll;
ll inf=1e18;

#define mxn 109
ll a[mxn],p[mxn],q[mxn];
ll item[7],t;
ll dp[mxn][1009][1<<6];
ll vis[mxn][1009][1<<6];
ll n,m;
//set<ll>S;

ll fun(ll ps,ll s,ll mask){ //printf("ps=%lld s=%lld tk=%lld min=%lld\n taken:",ps,s,tk,mn);
//    for(ll i=1;i<=6;i++){
//        if(item[i]!=0) printf("%lld=%lld, ",item[i],i);
//    }printf("\n");system("pause");
    if(ps==0){
        if(s>m) return -inf;
        if(mask==((1<<6)-1)) return inf;
        else return -inf;
    }

    if(s>m) return -inf;
    //if(tk==6) return inf;

    if(vis[ps][s][mask]==t) return dp[ps][s][mask];

    vis[ps][s][mask]=t;
    if(a[ps]>=1 && a[ps]<=6 && check(mask,a[ps]-1)==0 && s+p[ps]<=m){
        ll p1=min(q[ps],fun(ps-1,s+p[ps],biton(mask,a[ps]-1)));

        ll p2=fun(ps-1,s,mask);

        return dp[ps][s][mask]=max(p1,p2);
    }
    else{
        return dp[ps][s][mask]=fun(ps-1,s,mask);
    }
}

int main()
{
    __;

    ll T;
    ll i,j,k;


    t=1;
    while(scanf("%lld %lld",&n,&m)==2){
        for(i=1;i<=n;i++){
            scanf("%lld %lld %lld",&a[i],&p[i],&q[i]);
        }

        for(i=1;i<=6;i++) item[i]=0;
        //memset(dp,-1,sizeof dp);
        ll ans=fun(n,0,0);
        if(ans<=0) ans=0;
        printf("%lld\n",ans);
        t++;
    }


    return 0;
}

