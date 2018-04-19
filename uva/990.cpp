#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[31][1001],tym[31],val[31];
bool q[31],taken[31][1001];
ll w;

ll knapsack(ll i,ll t){ //cout<<"\n\nnow i="<<i<<" t="<<t<<"..."<<endl;
    if(i<0 || t<=0) return 0;
    if(dp[i][t]!=-1) return dp[i][t];
    ll p1=0,p2=0;
    if((t-tym[i]*3*w)>=0){//cout<<"from i="<<i<<" t="<<t<<endl; cout<<"1.call i="<<i-1<<" t="<<(t-tym[i]*3*w)<<endl;
        p1=val[i]+knapsack(i-1,t-tym[i]*3*w);
    } //cout<<"from i="<<i<<" t="<<t<<endl;cout<<"2.call i="<<i-1<<" t="<<t<<endl;
    p2=knapsack(i-1,t);
    if(p1>p2){ //cout<<"selected...\n";
        taken[i][t]=1;
        dp[i][t]=p1; //cout<<"1.i="<<i<<" t="<<t<<" dp[i][t]="<<dp[i][t]<<endl;
        return dp[i][t];
    }
    else{
        taken[i][t]=0;
        dp[i][t]=p2; //cout<<"2.i="<<i<<" t="<<t<<" dp[i][t]="<<dp[i][t]<<endl;
        return dp[i][t];
    }
}

int main(){
    ll n,t,i,j,f=0;
    while(scanf("%lld %lld",&t,&w)==2){
        scanf("%lld",&n);
        for(i=0;i<n;i++){
            scanf("%lld %lld",&tym[i],&val[i]);
        }
        memset(dp,-1,sizeof dp);
        memset(taken,0,sizeof taken);
        memset(q,0,sizeof q);
        ll ans=knapsack(n-1,t);
        ll took=0;
        ll p=t;
        for(i=n-1;i>=0;i--){
            if(taken[i][p]){
                q[i]=1;
                took++;
                p-=tym[i]*3*w;
            }
        }
        if(f==1) printf("\n");
        f=1;
        printf("%lld\n",ans);
        printf("%lld\n",took);
        for(i=0;i<n;i++){
            if(q[i]){
                printf("%lld %lld\n",tym[i],val[i]);
            }
        }
    }
    return 0;
}
