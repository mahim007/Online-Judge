#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 1009

vector<pair<ll,ll> >v1,v2;

int main(){
    ll a,b,f1=0,f2=0,i,j,k;
    pair<ll,ll>p1,p2;
    cin>>a>>b;

    ll sa,sb;
    sa=a*a;
    sb=b*b;

    for(ll i=a-1;i>0;i--){
        ll d=sa-i*i;
        ll rt=sqrt(d);
        if((i*i)+(rt*rt)==sa){
            //f1=1;
            p1.first=i;
            p1.second=rt;
            v1.push_back(p1);
        }
    }

    for(i=-(b-1);i<0;i++){
        ll d=sb-(i*i);
        ll rt=sqrt(d);

        //if(i==-p1.first && rt==p1.second) continue;
        if((i*i)+(rt*rt)==sb){
            //f2=1;
            p2.first=i;
            p2.second=rt;
            v2.push_back(p2);
        }
    }

    for(i=0;i<v1.size();i++){
        for(j=0;j<v2.size();j++){
            p1=v1[i];
            p2=v2[j];

            if(p1.second!=p2.second){
                ll oti=(p1.first-p2.first)*(p1.first-p2.first)+(p1.second-p2.second)*(p1.second-p2.second);
                if(oti==(sa+sb)){
                    cout<<"YES\n";
                    cout<<"0 0\n";
                    cout<<p1.first<<" "<<p1.second<<"\n";
                    cout<<p2.first<<" "<<p2.second<<"\n";
                    f1=1;
                    break;
                }
            }
        }

        if(f1==1) break;
    }


    if(f1==0) cout<<"NO\n";

    return 0;
}
