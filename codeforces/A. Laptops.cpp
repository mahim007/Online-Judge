#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009
struct data{
    ll a,b;
    bool operator < (const data& P) const{
        return b>P.b;
    }
};
vector<data>V;

int main(){
    ll n,x,y,f=0;
    scanf("%lld",&n);
    for(ll i=1;i<=n;i++){
        scanf("%lld %lld",&x,&y);
        data D;
        D.a=x;
        D.b=y;
        V.push_back(D);
    }

    sort(V.begin(),V.end());
    for(ll i=0;i<n-1;i++){
        if(V[i].a<V[i+1].a){
            f=1;
            break;
        }
    }

    if(f){
        printf("Happy Alex\n");
    }
    else{
        printf("Poor Alex\n");
    }

    return 0;
}
