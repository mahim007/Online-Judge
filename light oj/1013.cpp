#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 39

ll dp1[mxn][mxn];
ll dp2[mxn*2][mxn][mxn];
char s[mxn],p[mxn];

ll fun(ll l,ll a,ll b){
    if(a==0ll && b!=0ll) return fun(l-1,a,b-1);

    if(b==0ll && a!=0ll) return fun(l-1,a-1,b);

    if(a==0 && b==0 && l==0) return 1;

    if(a==0ll && b==0ll && l!=0ll) return 0;

    ll &ret=dp2[l][a][b];
    if(ret!=-1) return ret;

    ret=0ll;
    if(s[a]==p[b]){
        return ret=fun(l-1,a-1,b-1);
    }
    else{
        return ret=fun(l-1,a,b-1)+fun(l-1,a-1,b);
    }
}

ll lcs(ll a,ll b){
    if(a==0ll || b==0ll) return 0;

    ll &ret=dp1[a][b];
    if(ret!=-1) return ret;

    ret=0ll;
    if(s[a]==p[b]) ret=1+lcs(a-1,b-1);
    else{
        ret=max(lcs(a-1,b),lcs(a,b-1));
    }

    return ret;
}

int main(){
    ll T,t,i,j,k;
    scanf("%lld",&T);
    getchar();

    for(t=1;t<=T;t++){
        gets(s+1);
        gets(p+1);

        ll a=strlen(s+1); //cout<<s+1<<" "<<p+1<<"\n";
        ll b=strlen(p+1); //cout<<a<<" "<<b<<"\n";

        memset(dp1,-1,sizeof dp1);
        ll l=a+b-lcs(a,b);

        memset(dp2,-1,sizeof dp2);
        ll ans=fun(l,a,b);

        printf("Case %lld: %lld %lld\n",t,l,ans);
    }

    return 0;
}
