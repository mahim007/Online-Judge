#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maax 500999
bool tag[maax];
vector<ll>V;
ll arr[maax];

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

ll sof(ll n){
    ll p=0;
    for(ll i=0;V[i]*V[i]<=n;i++){
        while(n%V[i]==0){
            p=p+V[i];
            n=n/V[i];
        }
    }
    if(n!=1){
        p=p+n;
    }
    return p;
}

void process(){
    for(ll i=2;i<500009;i++){
        ll ans=i;
        ll cnt=0;
        while(tag[ans]==1 && ans!=4){
            cnt++;
            ans=sof(ans);
        }
        cnt++;
        arr[i]=cnt; //cout<<"i:"<<i<<" cnt:"<<arr[i]<<endl;
    }
}

int main(){ //freopen("11226 output","w",stdout);
    sieve(); //cout<<"sieve cmplt..."<<endl; //system("pause");
    process();
    ll T,t,a,b,mx,i;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&a,&b);
        if(a>b){
            swap(a,b);
        }
        mx=-1;
        for(i=a;i<=b;i++){
            if(arr[i]>mx){
                mx=arr[i];
            }
        }
        printf("Case #%lld:\n",t);
        printf("%lld\n",mx);
    }
    return 0;
}
