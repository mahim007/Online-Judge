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
string p[maax];
string q[maax];
ll lena,lenb;
ll dp[maax][maax];
bool vis[maax][maax];

ll lcs(ll i,ll j){
    if(i==lena || j==lenb) return 0;
    if(vis[i][j]) return dp[i][j];
    ll ans=0;
    if(p[i]==q[j]){
        ans=1+lcs(i+1,j+1);
    }
    else{
        ans=max(lcs(i+1,j),lcs(i,j+1));
    }
    vis[i][j]=1;
    dp[i][j]=ans;
    return dp[i][j];
}

int main(){
    ll T,t=1,i,j,k,n,m,flag;
    char s1[maax],s2[maax];
    while(gets(s1) && gets(s2)){
        lena=strlen(s1);
        lenb=strlen(s2);
        if(lena==0 || lenb==0){
            printf("%2lld. Blank!\n",t++);
            continue;
        }
        m=0;
        flag=0;
        for(i=0;i<=lena;i++){
            if((s1[i]>='a' && s1[i]<='z') || (s1[i]>='A' && s1[i]<='Z') || (s1[i]>='0' && s1[i]<='9')){
                p[m]+=s1[i];
                flag=1;
            }
            else{
                if(flag==1)
                    m++;
                flag=0;
            }
        } //for(i=0;i<m;i++) cout<<p[i]<<" "<<endl;
        lena=m; //cout<<lena<<endl;
        n=0;
        flag=0;
        for(i=0;i<=lenb;i++){
            if((s2[i]>='a' && s2[i]<='z') || (s2[i]>='A' && s2[i]<='Z') || (s2[i]>='0' && s2[i]<='9')){
                q[n]+=s2[i];
                flag=1;
            }
            else{
                if(flag==1)
                    n++;
                flag=0;
            }
        } //for(i=0;i<n;i++) cout<<q[i]<<" "<<endl;
        lenb=n; //cout<<lenb<<endl;
        printf("%2lld. Length of longest match: %lld\n",t++,lcs(0,0));
        memset(dp,0,sizeof dp);
        memset(vis,0,sizeof vis);
        for(i=0;i<maax;i++){
            p[i].clear();
            q[i].clear();
        }
    }
    return 0;
}
