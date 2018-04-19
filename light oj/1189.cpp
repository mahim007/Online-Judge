#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll fact[22];
vector<ll>ans;
int main(){
    ll T,t,i,n;
    fact[0]=fact[1]=1;
    for(i=2;i<22;i++){
        fact[i]=fact[i-1]*i;
    }

    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        for(i=20;i>=0 && n>0;i--){
            if(fact[i]>n) continue;
            ans.push_back(i);
            n-=fact[i];
        }

        printf("Case %lld: ",t);
        if(n!=0){
            printf("impossible\n");
        }
        else{
            for(i=ans.size()-1;i>=0;i--){
                printf("%lld!",ans[i]);
                if(i!=0) printf("+");
            }
            printf("\n");
        }
        ans.clear();
    }
    return 0;
}
