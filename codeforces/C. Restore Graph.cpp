#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009

struct data{
    ll id,K;
};

vector<data>V[mxn];
vector<pair<ll,ll> >P;
ll dis[mxn];

int main(){
    ios_base::sync_with_stdio(0);

    ll n,k,i,j,lev=0;
    cin>>n>>k;
    for(i=1;i<=n;i++){
        ll d;
        cin>>d;
        data D;
        D.id=i;
        D.K=k;
        V[d].push_back(D); //cout<<"size:"<<V[d].size()<<"\n";
        lev=max(lev,d);
    } //cout<<lev<<"\n";

//    for(i=0;i<=lev;i++){ cout<<"lev "<<i<<":";
//        for(j=0;j<V[i].size();j++){
//            cout<<V[i][j].id<<" ";
//        } cout<<"\n";
//    }

    ll f=1;
    for(i=0;i<=lev;i++){
        if(f==0) break;
        ll sz=V[i].size();
        if(i==0 && sz!=1) f=0;
        if(i==0) continue;
        if(sz==0) f=0;
        ll rem=V[i-1].size();
        ll r=0;

        for(j=0;j<sz;j++){
            while(V[i-1][r].K<=0 && r<rem){
                r++;
            }

            if(r==rem){
                f=0;
                break;
            }

            V[i-1][r].K--;
            V[i][j].K--;
            P.push_back({V[i-1][r].id,V[i][j].id});
        }
    }

    if(f==0) cout<<-1<<"\n";
    else{
        ll sz=P.size();
        cout<<sz<<"\n";
        for(i=0;i<sz;i++) cout<<P[i].first<<" "<<P[i].second<<"\n";
    }

    return 0;
}
