#include<bits/stdc++.h>
using namespace std;
#define ll long long int
struct data{
    string tm_name;
    ll num,minit;
};
vector<data>V;
ll a[100],b[100];
string p,q;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>p>>q;
    ll n,i,j,k;
    cin>>n;
    for(i=1;i<=n;i++){
        ll mnt,nmbr;
        string kon_tm,card;
        cin>>mnt>>kon_tm>>nmbr>>card;
        if(kon_tm=="h"){
            a[nmbr]++;
            if(card=="r") a[nmbr]++;
            if(a[nmbr]>=2){
                data D;
                D.minit=mnt;
                D.num=nmbr;
                D.tm_name=p;
                V.push_back(D);
                a[nmbr]=-999;
            }
        }
        else{
            b[nmbr]++;
            if(card=="r") b[nmbr]++;
            if(b[nmbr]>=2){
                data D;
                D.minit=mnt;
                D.num=nmbr;
                D.tm_name=q;
                V.push_back(D);
                b[nmbr]=-999;
            }
        }
    }

    ll sz=V.size();
    for(i=0;i<sz;i++){
        cout<<V[i].tm_name<<" "<<V[i].num<<" "<<V[i].minit<<"\n";
    }

    return 0;
}
