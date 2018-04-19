#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maax 101
ll n,dv;
bool tag[maax];
//map<ll,int>M;
vector<ll>V;

ll calculate(ll p){
    ll res=0;
    for(ll i=p;i<=n;i=i*p){ //cout<<"i:"<<i<<endl;
        res+=n/i; //cout<<"res:"<<res<<endl;
    }
    return res;
}

ll getans(){
    ll i,j,tmp,p;
    tmp=dv;
    for(i=0;V[i]*V[i]<=tmp;i++){
        p=0;
        while(tmp%V[i]==0){
            p++;
            tmp=tmp/V[i];
        }
        ll ans=calculate(V[i]); //cout<<V[i]<<" p:"<<p<<" ans:"<<ans<<endl;
        if(ans<p){
            return 0;
        }
    }
    if(tmp!=1){
        if(tmp<=n)
            return 1;
        else
            return 0;
    }
    return 1;
}

void generator(){
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

int main(){
    generator(); cout<<V.size()<<endl;
    ll i,j,k,flag;
    while(scanf("%lld %lld",&n,&dv)==2){
        if(dv==1){
            printf("1 divides %lld!\n",n);
            continue;
        }
        if(dv==0){
            printf("0 does not divide %lld!\n",n);
            continue;
        }
        //factorized();
        flag=getans();
        if(flag==1){
            printf("%lld divides %lld!\n",dv,n);
        }
        else{
            printf("%lld does not divide %lld!\n",dv,n);
        }
        //M.clear();
    }
    return 0;
}
