#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lmt 10000000
#define maax 9000
bool tag[maax];
vector<ll>V;
map<ll,int>M;
ll res[1000009];
ll sz;

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
    sz=V.size(); //cout<<"size:"<<sz<<endl;
}

int main(){
    generator();
    ll n,i,j,k,p;
    ll lcm=1;
        for(k=2;k<1000009;k++){
            ll tmp=k; //cout<<"now "<<k<<endl;
            for(i=0;V[i]*V[i]<=tmp && i<sz;i++){
                p=0;
                if(tmp%V[i]==0){
                    while(tmp%V[i]==0){
                        p++;
                        tmp=tmp/V[i];
                    }
                } //cout<<V[i]<<" ase "<<p<<" bar."<<endl;
                if(p>M[V[i]]){
                    for(j=M[V[i]];j<p;j++){
                        lcm=((lcm%lmt)*(V[i]%lmt))%lmt;
                        while(lcm%10==0){
                            lcm=lcm/10;
                        }
                    }
                    M[V[i]]=p;
                }
            }
            if(tmp!=1){
                if(M[tmp]==0){
                    M[tmp]++;
                    lcm=((lcm%lmt)*(tmp%lmt))%lmt;
                    while(lcm%10==0){
                        lcm=lcm/10;
                    }
                }
            }
            res[k]=lcm; //cout<<k<<" porjonto lcm "<<lcm<<endl;
        }
    while(scanf("%lld",&n)==1){
        if(n==0){
            break;
        }
        printf("%d\n",res[n]);
    }
    return 0;
}
