#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009

ll arr[mxn];

int main(){
    ll T,t,n,i;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        for(i=1;i<=n;i++) scanf("%lld",&arr[i]);
        sort(arr+1,arr+1+n);
        ll cnt=0;
        ll mx=0;
        for(i=1;i<n;i++){
            if(arr[i]>=arr[i+1] && i<n){
                while(arr[i]>=arr[i+1] && i<n){
                    i++;
                    cnt++;
                }

                if(cnt>mx) mx=cnt;
                cnt=0;
                i--;
            }
        }

        printf("Case %lld: %lld\n",t,mx+1);
    }

    return 0;
}
