#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<ll,ll>M;
vector<ll>V;
int main(){
    ll T,t,i,n,d,mx,x,j;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&n,&d);
        for(i=1;i<=n;i++){
            scanf("%lld",&x);
            V.push_back(x);
        }
        mx=-1;
        for(i=0;i<d;i++){
            M[V[i]]=V[i];
        }
        //cout<<"1:"<<M.begin()->second<<endl;
        //cout<<"2:"<<(--M.end())->second<<endl;
        if(mx<(ll)abs(M.begin()->second-(--M.end())->second)){
            mx=(ll)abs(M.begin()->second-(--M.end())->second);
        } //cout<<mx<<endl;
        for(i=0,j=d;j<n;j++,i++){
            M.erase(V[i]);
            M[V[j]]=V[j];
            if(mx<(ll)abs(M.begin()->second-(--M.end())->second)){
            mx=(ll)abs(M.begin()->second-(--M.end())->second);
        }
        }
        printf("Case %lld: %lld\n",t,mx);
        V.clear();
        M.clear();
    }
    return 0;
}
