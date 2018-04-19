#include<bits/stdc++.h>
using namespace std;
#define ll long long int
struct data{
    ll x,y;
};
vector<data>V;
int main(){
    ll n,i,j,a,b,mx=0,my=0,ans=0;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld %lld",&a,&b);
        data D;
        D.x=a;
        D.y=b;
        V.push_back(D);
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            mx=max(mx,abs(V[i].x-V[j].x));
            my=max(my,abs(V[i].y-V[j].y));
        }
    }

    ans=max(mx,my);
    printf("%lld\n",ans*ans);
    return 0;
}
