#include<bits/stdc++.h>
using namespace std;
#define ll int
#define mx 4009
vector<ll>ab,cd;
ll a[mx],b[mx],c[mx],h[mx];

int binary(ll sz,ll data){
    ll ans=0;
    ll low=0;
    ll high=sz-1;
    data=-data;
    while(low<=high){
        ll mid=(low+high)/2;
        if(cd[mid]==data){
            ans=1;
            ll tmp=mid+1;
            while(tmp<=high && cd[tmp]==data){
                tmp++;
                ans++;
            }
            tmp=mid-1;
            while(tmp>=0 && cd[tmp]==data){
                tmp--;
                ans++;
            }

            return ans;
        }
        else if(cd[mid]>data) high=mid-1;
        else low=mid+1;
    }

    return 0;
}

int main(){
    ll i,j,k,d,x,cnt,ans,n;
    while(scanf("%d",&n)==1){
        for(i=1;i<=n;i++){
            scanf("%d",&a[i]);
            scanf("%d",&b[i]);
            scanf("%d",&c[i]);
            scanf("%d",&h[i]);
        }

        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                ab.push_back(a[i]+b[j]);
                cd.push_back(c[i]+h[j]);
            }
        }

        sort(cd.begin(),cd.end());
        ll sz=cd.size();
        cnt=0;
        for(i=0;i<sz;i++){
            ll x=ab[i];
            cnt+=binary(sz,x);
        }

        printf("%d\n",cnt);
        ab.clear();
        cd.clear();
    }

    return 0;
}
