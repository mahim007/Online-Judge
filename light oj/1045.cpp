#include<bits/stdc++.h>
using namespace std;
#define ll long long int
double sum[1000009];
int main(){
    ll i,n,t,T,b;
    double ans;
    for(i=1;i<1000009;i++){
        sum[i]=sum[i-1]+log10(i);
    }
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&n,&b);
        ans=floor(sum[n]/log10(b)+1);
        printf("Case %lld: %lld\n",t,(ll)ans);
        //cout<<sum[n]<<endl;
    }
    return 0;
}
