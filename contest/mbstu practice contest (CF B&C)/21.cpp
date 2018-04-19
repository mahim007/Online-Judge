#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<ll,ll>M;
struct data{
    ll h=0;
    ll a=0;
    ll x,y;
};
data D[100009];

int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

    ll n,i,j,k;
    //cin>>n;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        ll p,q;
        //cin>>p>>q;
        scanf("%lld %lld",&p,&q);
        D[i].x=p;
        D[i].y=q;
        D[i].h=n-1;
        D[i].a=n-1;
        M[p]++;
    }

    for(i=1;i<=n;i++){
        ll c=D[i].y;
        D[i].h+=M[c];
        D[i].a-=M[c];
    }

    for(i=1;i<=n;i++){
        //cout<<D[i].h<<" "<<D[i].a<<"\n";
        printf("%lld %lld\n",D[i].h,D[i].a);
    }

    return 0;


}
