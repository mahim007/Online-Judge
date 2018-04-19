#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 209

struct data{
    ll st,ed;
    bool operator < (const data& D) const{
        if(st!=D.st) return st<D.st;
        return ed<D.ed;
    }
};

vector<data>V,P;

int main(){
    ll n,i,j,k;
    cin>>n;
    for(i=1;i<=n;i++){
        ll x,y;
        cin>>x>>y;
        data D;
        if(i==1){
            D.st=x;
            D.ed=x+y-1;
            V.push_back(D);
            P.push_back(D);
        }
        else{
            ll nt=0;
            sort(P.begin(),P.end());
            ll a=x;
            ll b=x+y-1;
            for(j=0;j<P.size();j++){
                if((a>=P[j].st && a<=P[j].ed) || (b>=P[j].st && b<=P[j].ed) || (P[j].st>=a && P[j].st<=b) || (P[j].ed>=a && P[j].ed<=b)){
                    nt=1;
                }
            }

            if(nt==0){
                D.st=x;
                D.ed=x+y-1;
                V.push_back(D);
                P.push_back(D);
            }
            else{
                ll a=1;
                ll b=a+y-1;
                nt=0;
                for(j=0;j<P.size();j++){
                if((a>=P[j].st && a<=P[j].ed) || (b>=P[j].st && b<=P[j].ed) || (P[j].st>=a && P[j].st<=b) || (P[j].ed>=a && P[j].ed<=b)){
                    a=P[j].ed+1;
                    b=a+y-1;
                }
                }

                D.st=a;
                D.ed=b;
                V.push_back(D);
                P.push_back(D);
            }
        }
    }

    for(i=0;i<n;i++) cout<<V[i].st<<" "<<V[i].ed<<"\n";
    return 0;
}
