#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[301][301][301];
//ll dp2[301][301];
ll inpt[4];

ll process(ll i,ll coin,ll amount){
    if(i<=0 || coin<=0){
        if(amount==0) return 1;
        else return 0;
    }
    if(coin>=0){
        if(amount==0) return 1;
        if(dp[i][coin][amount]!=-1) return dp[i][coin][amount];
        ll p1=0,p2=0;
        if(amount-i>=0){
            p1=process(i,coin-1,amount-i);
        }
        p2=process(i-1,coin,amount);
        return dp[i][coin][amount]=p1+p2;
    }
    else return 0;
}

int main(){
    memset(dp,-1,sizeof dp);
    process(300,300,300);
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
            printf("%lld\n",process(inpt[k],inpt[k],inpt[k]));
        }
        else if(k==2){
            if(inpt[2]>300){
                inpt[2]=300;
            }
            printf("%lld\n",process(inpt[1],inpt[2],inpt[1]));
        }
        else{ //cout<<process(1,inpt[3],inpt[1])<<" "<<process(1,inpt[2]-1,inpt[1])<<endl;
            if(inpt[1]==0 && inpt[2]==0){
                printf("1\n");
                continue;
            }
            if(inpt[3]>300) inpt[3]=300;
            if(inpt[2]>300) inpt[2]=300;
            printf("%lld\n",process(inpt[1],inpt[3],inpt[1])-process(inpt[1],inpt[2]-1,inpt[1]));
        }
    }
    return 0;
}

