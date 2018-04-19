#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 100009
ll arr[mx];
//ll sum[mx];
int main(){
    ll i,j,k,c,T,t,n,q,added;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&n,&q);
        for(i=0;i<n;i++){
            scanf("%lld",&arr[i]);
            //sum[i]=arr[i]+sum[i-1]; //cout<<sum[i]<<" ";
        }

        ll samne=0,piche=0;
        for(i=0;i<n;i++){
            samne+=arr[i]*(n-i-1);
        }
        for(i=1;i<n;i++){
            piche+=i*arr[i];
        }
        printf("Case %lld:\n",t);
        for(k=1;k<=q;k++){
            scanf("%lld",&c);
            if(c==1){
                printf("%lld\n",samne-piche);
            }
            else{
                ll x,v;
                scanf("%lld %lld",&x,&v);
                samne-=arr[x]*(n-x-1);
                piche-=arr[x]*x;
                arr[x]=v;
                samne+=arr[x]*(n-x-1);
                piche+=arr[x]*x;
                added=1;
            }
        }
    }
    return 0;
}

