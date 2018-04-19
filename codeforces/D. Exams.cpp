#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009
#define inf 9999999999

ll a[mxn],b[mxn],xm[mxn];
ll m;

ll call(ll mid){
    memset(xm,0,sizeof xm);
    ll s=0;
    for(ll i=mid;i>=1;i--){
        if(a[i]!=0 && xm[a[i]]==0){ //cout<<"ok ";
            xm[a[i]]=1;
            s-=b[a[i]];
            if(b[a[i]]>=i) return 0;
        }
        else s++;
    }

    //cout<<"xm ";
    for(ll i=1;i<=m;i++){ //cout<<xm[i]<<" ";
        if(xm[i]==0) return 0;
    }

    if(s<0) return 0;
    return 1;
}

int main(){
    ll n,i,j,k,ans=inf;
    scanf("%lld %lld",&n,&m);
    for(i=1;i<=n;i++){
        scanf("%lld",&a[i]);
    }

    for(i=1;i<=m;i++){
        scanf("%lld",&b[i]);
    }

    ll low=1;
    ll high=n;
    while(low<=high){
        ll mid=(low+high)/2; //printf("h=%lld l=%lld mid=%lld\n",high,low,mid);
        if(call(mid)==1){ //cout<<"enter\n";
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }

    if(ans==inf) ans=-1;
    printf("%lld\n",ans);
    return 0;
}
