#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maax 1<<28
ll coin[]={5,10,20,50,100,200};
ll num[6];
ll val[5009];

void keeper(){
    for(ll i=0;i<5009;i++)
        val[i]=maax;
    val[0]=0;
    for(ll i=0;i<6;i++){
        for(ll j=coin[i];j<5009;j++){
            val[j]=min(val[j],1+val[j-coin[i]]);
        }
    }
}

ll call(ll i,ll amount){
    if(i>=6 && amount>0) return maax;
    if(amount<-500 || amount>500) return maax;
    if(i==6 && amount<=0) return val[-amount];
    if(num[i]==0) return call(i+1,amount);
    else{
        ll p1=0,p2=0;
        num[i]--;
        p1=call(i,amount-coin[i]);
        num[i]++;
        p2=call(i+1,amount);
        return min(p1+1,p2);
    }
}

int main(){
    keeper();
    while(scanf("%lld %lld %lld %lld %lld %lld",&num[0],&num[1],&num[2],&num[3],&num[4],&num[5])){
        if(num[0]+num[1]+num[2]+num[3]+num[4]+num[5]==0){
            break;
        }
        ll t,p;
        scanf("%lld.%lld",&t,&p);
        ll ans=call(0,t*100+p);
        printf("%3lld\n",ans);
    }
    return 0;
}
