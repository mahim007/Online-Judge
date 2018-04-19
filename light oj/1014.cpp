#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll>V;

int main(){
    ll T,t,i,j,k,n,p,l;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&p,&l);
        p-=l;
        ll root=sqrt(p);
        for(i=1;i<=root;i++){
            if(p%i==0){
                if(i>l) V.push_back(i);
                if((p/i)>l && (i!=(p/i))) V.push_back(p/i);
            }
        }
        sort(V.begin(),V.end());
        printf("Case %lld:",t);
        if(V.size()==0) printf(" impossible");
        else{
        for(i=0;i<V.size();i++){
            printf(" %lld",V[i]);
        }
        }
        printf("\n");
        V.clear();
    }
    return 0;
}
