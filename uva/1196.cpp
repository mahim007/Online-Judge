#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 10009
ll dp[mx];
struct tiles{
    ll x,y;
    bool operator < (const tiles& P)const{
        if(P.x!=x)
            return x<P.x;
        return y<P.y;
    }
};
vector<tiles>V;

bool check(tiles& p,tiles& q){
    return (p.x>=q.x && p.y>=q.y);
}

int main(){
    ll n,i,j,ans;
    while(scanf("%lld",&n)==1 && n){
        for(i=1;i<=n;i++){
            ll a,b;
            tiles T;
            scanf("%lld %lld",&a,&b);
            T.x=a;
            T.y=b;
            V.push_back(T);
        }

        sort(V.begin(),V.end()); //cout<<"size:"<<V.size()<<endl;
        dp[0]=1;
        ans=1;
        for(i=1;i<n;i++){
            dp[i]=1;
            for(j=0;j<i;j++){
                if(check(V[i],V[j]) && dp[i]<1+dp[j]){
                    dp[i]=1+dp[j];
                }
            }

            if(dp[i]>ans) ans=dp[i];
        }

        printf("%lld\n",ans);
        V.clear();
        memset(dp,0,sizeof dp);
    }
    printf("*\n");
    return 0;
}
