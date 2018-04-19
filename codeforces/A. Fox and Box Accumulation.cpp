#include<bits/stdc++.h>
using namespace std;
#define ll long long int

vector<ll>V;

int main(){
    ll n,i,d,ans=0,up=0,j;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",&d);
        V.push_back(d);
    }

    sort(V.begin(),V.end());

    for(i=0;i<n;i++){
        if(V[i]==-1) continue;
        ans++;
        up=V[i];
        d=0;
        for(j=i;j<n;j++){
            if(V[j]>=d){
                d++;
                V[j]=-1;
            }
        }
    }

    printf("%lld\n",ans);

    return 0;
}
