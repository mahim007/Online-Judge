#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maax 100009
bool tag[maax];
vector<ll>V;
ll dv[maax];
ll sum[maax];

void sieve(){
    tag[0]=tag[1]=1;
    for(ll i=4;i<maax;i=i+2){
        tag[i]=1;
    }
    for(ll i=3;i*i<maax;i=i+2){
        if(tag[i]==0){
            for(ll j=i*i;j<maax;j=j+i+i){
                tag[j]=1;
            }
        }
    }
    for(ll i=1;i<maax;i++){
        if(tag[i]==0){
            V.push_back(i);
        }
    }
}

ll getsum(ll n){
    ll s=0;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            s+=i;
            if(i*i!=n)
                s+=n/i;
        }
    }
    return s;
}

void process(){
    for(ll i=2;i<maax;i++){
        sum[i]=i+1;
    }
    ll p,s,j;
    for(ll k=1;k<maax;k++){
        j=1;
        s=0;
        p=0;
        ll n=k;
        for(ll i=0;V[i]*V[i]<=n;i++){
            p=0;
            while(n%V[i]==0){
                p++;
                //sum[k]=sum[k]+V[i];
                n=n/V[i];
            }
            j=j*(p+1);
        }
        if(n!=1){
            j=j*2;
            //sum[k]=sum[k]+n;
        }
        dv[k]=j;
        sum[k]=getsum(k);
    }
}

int main(){
    sieve();
    process();
    ll T,t;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        ll a,b,k;
        scanf("%lld %lld %lld",&a,&b,&k);
        if(a>b)
            swap(a,b);
        while(a%k!=0){
            a++;
        }
        ll d=0;
        ll s=0;
        for(ll i=a;i<=b;i=i+k){
            d=d+dv[i]; //cout<<i<<" "<<dv[i]<<endl;
            s=s+sum[i]; //cout<<i<<" "<<sum[i]<<endl;
        }
        printf("%lld %lld\n",d,s);
    }
    return 0;
}
