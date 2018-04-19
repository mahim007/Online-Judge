#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maax 5000
bool tag[maax];
vector<ll>V;
//ll arr[maax];
map<ll,int>M;

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

ll getans(ll a,ll c){
    ll p=0;
    for(ll i=0;V[i]*V[i]<=a;i++){
        p=0;
        while(a%V[i]==0){
            p++;
            a=a/V[i];
        }
        if(p<M[V[i]]){
            continue;
        }
        else if(p==M[V[i]]){
            for(ll j=1;j<=p;j++){
                c=c/V[i];
            }
        }
        else if(p>M[V[i]]){
            return 0;
        }
    }
    if(a!=1){
        if(M[a]==1){
            c=c/a;
        }
        else if(M[a]==0){
            return 0;
        }
    }
    return c;
}

void factor(ll c){
    ll tmp=c;
    for(ll i=0;V[i]*V[i]<=tmp;i++){
        while(tmp%V[i]==0){
            M[V[i]]++;
            tmp=tmp/V[i];
        }
    }
    if(tmp!=1){
        M[tmp]++;
    }
}

int main(){
    generator();
    ll a,b,c,t,T;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&a,&c);
        factor(c);
        b=getans(a,c);
        if(b==0){
            printf("NO SOLUTION\n");
        }
        else{
            printf("%lld\n",b);
        }
        M.clear();
    }
    return 0;
}
