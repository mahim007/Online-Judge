#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,i,ans;
    vector<ll>v;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        ll d;
        scanf("%lld",&d);
        if(d==1){
            v.push_back(i);
        }
    }
    if(v.size()==0){
        printf("0\n");
    }
    else if(v.size()==1){
        printf("1\n");
    }
    else{
        ans=1;
        for(i=1;i<v.size();i++){
            ans*=v[i]-v[i-1];
        }

        printf("%lld\n",ans);
    }
    return 0;
}
