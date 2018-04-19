#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define limit 1000009
set<ll>S;
ll par[limit],child[limit];
vector<ll>P,Q;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,i,j,k,a,b,x,y;
    cin>>n;
    memset(par,-1,sizeof par);
    for(i=1;i<=n;i++){
        cin>>a>>b;
        child[a]=b;
        par[b]=a;
        if(a) S.insert(a);
        if(b) S.insert(b);
    }

    for(set<ll>::iterator it=S.begin();it!=S.end();it++){
        if(par[*it]==-1){
            x=*it;
            break;
        }
    }

    y=child[0];
    while(x>0){
        P.push_back(x);
        x=child[x];
    }

    while(y>0){
        Q.push_back(y);
        y=child[y];
    }

    for(i=0;i<n/2;i++){
        cout<<P[i]<<" "<<Q[i]<<" ";
    }

    if(n&1) cout<<P[P.size()-1];
    cout<<"\n";
    return 0;
}
