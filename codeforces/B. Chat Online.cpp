#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll p,q,l,r;
struct data{
    ll a,b;
};
vector<data>V1,V2;

ll check(ll t,ll pos){
    for(ll i=0;i<p;i++){
        ll x,y,a,b;
        x=V1[i].a;
        y=V1[i].b;
        a=V2[pos].a+t;
        b=V2[pos].b+t;

        if( (((a>=x)&&(a<=y))||(b>=x)&&(b<=y)) || (((x>=a)&&(x<=b))||(y>=a)&&(y<=b)) )
            return 1;
    }

    return 0;
}

int main(){
    ll ans=0;
    cin>>p>>q>>l>>r;
    for(ll i=1;i<=p;i++){
        ll x,y;
        cin>>x>>y;
        data D;
        D.a=x;
        D.b=y;
        V1.push_back(D);
    }

    for(ll i=1;i<=q;i++){
        ll x,y;
        cin>>x>>y;
        data D;
        D.a=x;
        D.b=y;
        V2.push_back(D);
    }

    for(ll i=l;i<=r;i++){
        for(ll j=0;j<q;j++){
            if(check(i,j)){
                ans++;
                break;
            }
        }
    }

    cout<<ans<<"\n";
    return 0;
}
