#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll count_func(ll n,ll d){
    ll cnt=0;
    while(n%d==0 && n>0){
        cnt++;
        n=n/d;
    }
    return cnt;
}

ll fact_func(ll n,ll d){
    ll cnt=0;
    while(n>0){
        cnt+=n/d;
        n=n/d;
    }
    return cnt;
}

int main(){
    ll T,t,i,j,n,r,p,q,res=0;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld %lld %lld",&n,&r,&p,&q);
        ll n2=fact_func(n,2)-(fact_func(r,2)+fact_func(n-r,2)); //cout<<fact_func(n,2)<<" "<<fact_func(r,2)<<" "<<fact_func(n-r,2)<<" "<<n2<<endl;
        ll n5=fact_func(n,5)-(fact_func(r,5)+fact_func(n-r,5)); //cout<<fact_func(n,5)<<" "<<fact_func(r,5)<<" "<<fact_func(n-r,5)<<" "<<n5<<endl;
        ll p2=count_func(p,2)*q; //cout<<p2<<endl;
        ll p5=count_func(p,5)*q; //cout<<p5<<endl;
        res=min(n2+p2,n5+p5);
        printf("Case %lld: %lld\n",t,res);
    }
    return 0;
}
