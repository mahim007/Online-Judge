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
int main(){
    ll n,i,j,arr[maax],flag=0,sum=0,ans;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    ll x,y;
    cin>>x>>y;
    ll grp=0;
    for(i=n;i>=1;i--){
        grp+=arr[i];
        sum-=arr[i];
        if(grp>=x&& grp<=y && sum>=x&&sum<=y){
            ans=i;
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("%lld\n",ans);
    }
    else
        printf("0\n");
    return 0;
}

