#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[21][201];
ll vis[21][201];
ll val[21],sum,t,n,ans,res;

ll knapsack(ll i,ll amount){
    if(i>n){
        if(amount+amount==sum)
            return 1;
        else
            return 0;
    }
    if(vis[i][amount]==t)
        return dp[i][amount];
    ll p1=0,p2=0;
    if(amount+val[i]<=sum/2)
        p1=knapsack(i+1,amount+val[i]);
    p2=knapsack(i+1,amount);
    vis[i][amount]=t;
    dp[i][amount]=p1||p2;
    return dp[i][amount];
}

void takeinput(){
    char s[10000];
        gets(s);
        ll ln=strlen(s);
        ll fnd=1;
        ll l=1;
        for(ll i=0;i<ln;i++){
            if(s[i]>='0' && s[i]<='9'){
                if(fnd==1)
                    val[l]=val[l]*10+s[i]-'0';
                else{
                    fnd=1;
                    val[l]=val[l]*10+s[i]-'0';
                }
            }
            else{
                if(fnd==1){
                    fnd=0;
                    l++;
                }
            }
        }
        sum=0;
        for(ll i=1;i<=l;i++){
            sum+=val[i];
        }
        n=l;
}

int main(){
    ll i,j,k,m;
    t=1;
    while(scanf("%lld",&m)==1){
        getchar();
        for( k=1;k<=m;k++){
            takeinput();
            ans=knapsack(1,0);
            if(ans==1)
                printf("YES\n");
            else
                printf("NO\n");
            t++;

            memset(val,0,sizeof val);
        }
    }
}
