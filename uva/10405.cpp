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
#define maax 1009

char a[maax],b[maax];
ll dp[maax][maax];
bool visited[maax][maax];
ll lena,lenb;

ll lcs(ll i,ll j)
{
    if(i==lena || j==lenb) return 0;
    if(visited[i][j]) return dp[i][j];
    ll ans=0;
    if(a[i]==b[j])
    {
        ans=1+lcs(i+1,j+1);
    }
    else
    {
        ll val1=lcs(i+1,j);
        ll val2=lcs(i,j+1);
        ans=max(val1,val2);
    }
    visited[i][j]=1;
    dp[i][j]=ans;
    return dp[i][j];
}

int main()
{ //freopen("10405 output","w",stdout);
    ll i,j,n;
    while(gets(a))
    {
        gets(b);
        lena=strlen(a); //cout<<a[lena];
        lenb=strlen(b);
        printf("%lld\n",lcs(0,0));
        memset(dp,0,sizeof dp);
        memset(visited,0,sizeof visited);
    }
    return 0;
}
