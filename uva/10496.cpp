#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[11],ans,q;
ll nx,ny,sx,sy;
struct data{
    ll x,y;
};
data D[11];
vector<data>V;

void call(){
    if(V.size()==q){
        ll dis=0;
        dis+=abs(sx-V[0].x)+abs(sy-V[0].y);
        for(ll i=1;i<V.size();i++){
            dis+=abs(V[i].x-V[i-1].x)+abs(V[i].y-V[i-1].y);
        }

        dis+=abs(sx-V[q-1].x)+abs(sy-V[q-1].y);
        if(dis<ans) ans=dis;
        return;
    }

    for(ll i=1;i<=q;i++){
        if(a[i]==0){
            a[i]=1;
            V.push_back(D[i]);
            call();
            a[i]=0;
            V.pop_back();
        }
    }
}

int main(){
    ll n,i,j,k,T,t;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        ans=1e9;
        scanf("%lld %lld",&nx,&ny);
        scanf("%lld %lld",&sx,&sy);
        scanf("%lld",&q);
        for(i=1;i<=q;i++){
            scanf("%lld %lld",&D[i].x,&D[i].y);
        }

        memset(a,0,sizeof a);
        call();
        printf("The shortest path has length %lld\n",ans);
    }

    return 0;
}
