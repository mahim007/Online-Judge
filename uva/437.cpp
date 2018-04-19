#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[200];
struct data{
    ll x,y,z;
    bool operator < (const data& P) const{
        if(P.x!=x)
            return P.x>x;
        return P.y>y;
    }
};

vector<data>V;

bool check(const data& p,data& q){
    return (p.x>q.x && p.y>q.y);
}

int main(){
    ll n,i,a,j,b,c,ans,res,t=1;;
    while(scanf("%lld",&n)==1 && n){
        for(i=1;i<=n;i++){
            scanf("%lld %lld %lld",&a,&b,&c);
            data d;
            d.x=a;d.y=b;d.z=c; V.push_back(d);
            d.x=a;d.y=c;d.z=b; V.push_back(d);

            d.x=b;d.y=a;d.z=c; V.push_back(d);
            d.x=b;d.y=c;d.z=a; V.push_back(d);

            d.x=c;d.y=a;d.z=b; V.push_back(d);
            d.x=c;d.y=b;d.z=a; V.push_back(d);
        }

        sort(V.begin(),V.end());
        ans=0;
        dp[0]=V[0].z;
        for(i=1;i<V.size();i++){
            dp[i]=V[i].z;
            for(j=0;j<i;j++){
                if(check(V[i],V[j]) && dp[i]<dp[j]+V[i].z){
                    dp[i]=dp[j]+V[i].z;
                }
            }

            if(dp[i]>ans) ans=dp[i];
        }

        printf("Case %lld: maximum height = %lld\n",t,ans);
        t++;
        V.clear();
        memset(dp,0,sizeof dp);
    }
    return 0;
}
