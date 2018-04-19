#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll>V;
ll n,k,p,x,y,m;
ll used[209],a[209];
void call(ll l){
    if(V.size()==4){
        ll s=0;
        for(ll i=0;i<4;i++) s+=V[i];
        if(s>=x && s<=y) p++; //cout<<"s="<<s<<" p:"<<p<<"\n";
        return;
    }

    for(ll i=l;i<=m;i++){
        if(a[i]>y) break;
        if(used[i]<4){
            used[i]++;
            V.push_back(a[i]);
            call(i);
            used[i]--;
            V.pop_back();

        }
    }
}

int main(){
    //ios_base::sync_with_stdio(0);
    ll T,t,i;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&m);
        for(i=1;i<=m;i++){
            scanf("%lld",&a[i]);
            used[i]=0;
        }

        scanf("%lld %lld",&x,&y);
        sort(a+1,a+1+n);
        call(1);
        printf("Case %lld: %lld\n",t,p);
        p=0;
        V.clear();
    }


    return 0;
}
