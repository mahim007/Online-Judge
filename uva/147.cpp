#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[12][300*109];
ll coin[]={10000,5000,2000,1000,500,200,100,50,20,10,5};

ll process(ll i,ll amount){
    if(i>=11){
        if(amount==0) return 1;
        else
            return 0;
    }
    if(amount<0) return 0;
    if(amount==0) return 1;
    if(dp[i][amount]!=-1){
        return dp[i][amount];
    }
    ll p1=0,p2=0;
    if(amount-coin[i]>=0){
        p1=process(i,amount-coin[i]);
    }
    else
        p1=0;
    p2=process(i+1,amount);
    return dp[i][amount]=p1+p2;
}

int main(){
    memset(dp,-1,sizeof dp);
    process(0,300*100);
    ll x,y,ln,i;
    char s[20];
    while(gets(s)){
        if(!strcmp(s,"0.00"))
            break;
        ln=strlen(s);
        x=0,y=0;
        for(i=0;s[i]!='.';i++){
            x=x*10+s[i]-'0';
        }
        i++;
        for(;i<ln;i++){
            y=y*10+s[i]-'0';
        } //cout<<"total:"<<x<<" "<<y<<" "<<x*100+y<<endl;
        printf("%6s%17lld\n",s,process(0,x*100+y));
    }
    return 0;
}
