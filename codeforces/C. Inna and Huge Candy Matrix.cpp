#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios_base::sync_with_stdio(0);

    ll n,m,x,y,z,p;
    ll i,j,k,u,v;
    ll r,c;

    cin>>n>>m>>x>>y>>z>>p;
    x=x%4;
    y=y%2;
    z=z%4;
    for(k=1;k<=p;k++){
        r=n;
        c=m;
        ll rr=r,cc=c;
        cin>>rr>>cc;

        for(i=1;i<=x;i++){
            ll tmp=rr;
            rr=cc;
            cc=r-tmp+1;
            swap(r,c);
        } //cout<<rr<<" "<<cc<<"\n";

        if(y==1){
            cc=c-cc+1;
        }

        for(i=1;i<=z;i++){
            ll tmp=cc;
            cc=rr;
            rr=c-tmp+1;
            swap(r,c);
        }

        cout<<rr<<" "<<cc<<"\n";
    }


    return 0;
}
