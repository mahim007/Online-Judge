#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sci(n) scanf("%d",&n)
#define scl(n) scanf("%lld",&n)
#define scd(n) scanf("%lf",&n)
#define sc scanf
#define pf printf
#define pfi(n) printf("%d",n)
#define pfl(n) printf("%lld",n)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define mem(a,n) memset(a,n,sizeof(a))
#define maax 109
bool visited[maax][maax];
ll dp[maax][maax];
char a[maax],b[maax];
ll len1,len2;

ll lcs(ll i,ll j){
    if(i==len1 || j==len2){
        return 0;
    }
    if(visited[i][j]) return dp[i][j];
    ll ans=0;
    if(a[i]==b[j]){
        ans=1+lcs(i+1,j+1);
    }
    else{
        ll m=lcs(i+1,j);
        ll n=lcs(i,j+1);
        ans=max(m,n);
    }
    visited[i][j]=1;
    dp[i][j]=ans;
    return dp[i][j];
}

int main()
{
    ll T,t=1,i,j,ans;
    while(gets(a) && a[0]!='#'){
        gets(b);
        len1=strlen(a);
        len2=strlen(b);
        ans=lcs(0,0);
        printf("Case #%lld: you can visit at most %lld cities.\n",t++,ans);
        memset(dp,0,sizeof dp);
        memset(visited,0,sizeof visited);
    }
    return 0;
}
