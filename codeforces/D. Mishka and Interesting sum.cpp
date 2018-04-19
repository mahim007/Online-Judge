#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lim 1000009
ll a[lim];
vector<ll>V;
map<ll,ll>ANN;
struct data{
    map<ll,ll>M;
};
data D[lim];

int main(){
    ll n,i,j,k,m,ans=0;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",&a[i]);
        D[i].M=D[i-1].M;
        D[i].M[a[i]]++;
    }


    scanf("%lld",&m);
    for(k=1;k<=m;k++){
        V.push_back(0);
        ll a,b;
        scanf("%lld %lld",&a,&b);
        ANN=D[b].M;
        for(map<ll,ll>::iterator it=D[a-1].M.begin();it!=D[a-1].M.end();it++){
            ll x,y;
            x=it->first;
            y=it->second; //cout<<"x:"<<x<<" y:"<<y<<endl;
            ANN[x]-=y;
        } //cout<<"V siz:"<<V.size()<<endl;
        for(map<ll,ll>::iterator it=ANN.begin();it!=ANN.end();it++){
            if((it->second)>0 && (it->second%2)==0){
                V.push_back(it->first);
            }
        }

        ans=V[0];
        for(i=1;i<V.size();i++){
        ans^=V[i];
        }

    printf("%lld\n",ans);
    V.clear();
    ANN.clear();
    }


    return 0;
}
