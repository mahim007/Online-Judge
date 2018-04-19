#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp1[301][301][301];
ll dp2[301][301];
ll inpt[4];
ll call(ll i,ll amount){
    if(i>amount){
        if(amount==0) return 1;
        else return 0;
    }
    if(amount==0) return 1;
    if(dp1[i][amount]!=-1) return dp1[i][amount];
    ll p1=0,p2=0;
    if(amount-i>=0){
        p1=call(i,amount-i);
    }
    p2=call(i+1,amount);
    return dp1[i][amount]=p1+p2;
}

ll process(ll i,ll coin,ll amount){
    if(i>amount || coin<=0){
        if(amount==0) return 1;
        else return 0;
    }
    if(coin>0){
        if(amount==0) return 1;
        ll p1=0,p2=0;
        if(amount-i>=0){
            p1=process(i,coin-1,amount-i);
        }
        p2=process(i+1,coin,amount);
        return p1+p2;
    }
    else return 0;
}

int main(){
    memset(dp1,-1,sizeof dp1);
    call(1,300);
    char s[1000];
    while(gets(s)){
        inpt[1]=inpt[2]=inpt[3]=inpt[4]=0;
        ll ln=strlen(s);
        ll i;
        ll flag=0;
        ll k=0;
        for(i=0;i<ln;i++){
            if(s[i]>='0' && s[i]<='9'){
                if(flag==0){
                    flag=1;
                    k++;
                    inpt[k]=inpt[k]*10+s[i]-'0';
                }
                else inpt[k]=inpt[k]*10+s[i]-'0';
            }
            else flag=0;
        }
        if(k==1){
            printf("%lld\n",call(1,inpt[k]));
        }
        else if(k==2){
            printf("%lld\n",process(1,inpt[2],inpt[1]));
        }
        else{ //cout<<process(1,inpt[3],inpt[1])<<" "<<process(1,inpt[2]-1,inpt[1])<<endl;
            printf("%lld\n",process(1,inpt[3],inpt[1])-process(1,inpt[2]-1,inpt[1]));
        }
    }
    return 0;
}
