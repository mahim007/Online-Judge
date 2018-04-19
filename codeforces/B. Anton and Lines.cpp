#include<bits/stdc++.h>
using namespace std;
#define ll long long int
struct point{
    ll first,second;
    bool operator < (const point& P) const{
        if(first!=P.first)
            return first>P.first;
        return second>P.second;
    }
};
vector<point>V;
int main(){
    ll n,i,x1,x2,k,b;
    scanf("%lld",&n);
    scanf("%lld %lld",&x1,&x2);
    for(i=1;i<=n;i++){
        scanf("%lld %lld",&k,&b);
        point D;
        D.first=k*x1+b;
        D.second=k*x2+b;
        V.push_back(D);
    }
    sort(V.begin(),V.end());
    ll ok=1;
    for(i=1;i<V.size();i++){
        if(V[i].second>V[i-1].second && V[i].first!=V[i-1].first){
            ok=0;
            printf("YES\n");
            break;
        }
    }
    if(ok==1)
        printf("NO\n");
    return 0;
}
