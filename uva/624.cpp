#include<bits/stdc++.h>
using namespace std;
#define ll long long int

vector<ll>ans,V;
ll res,L,n;
ll track[29];

void fun(ll pre,ll sum){ //cout<<pre<<" "<<sum<<"\n";
    if(sum>res){
        res=sum;
        ans.clear();
        ll sz=V.size();
        for(ll i=0;i<sz;i++) ans.push_back(V[i]);
        //return;
    }

    if(pre>n) return;

    for(ll i=pre+1;i<=n;i++){
        if(sum+track[i]<=L){
            V.push_back(track[i]);
            fun(i,sum+track[i]);
            V.pop_back();
        }
    }
}

int main(){
    ll i,j,k;
    while(scanf("%lld",&L)==1){
        scanf("%lld",&n);
        for(i=1;i<=n;i++) scanf("%lld",&track[i]);

        res=0;
        fun(0,0);
        ll sz=ans.size();
        for(i=0;i<sz;i++) printf("%lld ",ans[i]);
        printf("sum:%lld\n",res);
    }

    return 0;
}
