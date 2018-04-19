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
int data[maax][maax];
int cnt[2][maax];
ll iscorrupt(int n){
    ll flag=0;
    for(int i=0;i<n;i++){
        if(cnt[0][i]%2)
            flag++;
    }
    if(flag>1) return 1;
    flag=0;
    for(int i=0;i<n;i++){
        if(cnt[1][i]%2)
            flag++;
    }
    if(flag>1) return 1;
    return 0;
}

int main()
{
    ll T,t,i,j,k,n;
    while(scanf("%lld",&n)==1){
        if(n==0)
            break;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                scanf("%d",&data[i][j]);
            }
        }
        ll flag=0;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cnt[0][i]+=data[i][j];
                cnt[1][i]+=data[j][i];
                }
                if(cnt[0][i]%2 || cnt[1][i]%2){
                    flag=1;
                }
            }
        if(flag==0){
            printf("OK\n");
            continue;
        }
        if(iscorrupt(n)){
            printf("Corrupt\n");
        }
        else{
            for(i=0;cnt[1][i]%2==0;i++);
            for(j=0;cnt[0][j]%2==0;j++);
            printf("Change bit (%lld,%lld)\n",j+1,i+1);
        }
        memset(cnt,0,sizeof cnt);
    }
    return 0;
}

