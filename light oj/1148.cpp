#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<ll,int>M;
int main(){
    ll T,t,i,j,n,x,ans;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        for(i=1;i<=n;i++){
            scanf("%lld",&x);
            M[x]++;
        }
        ans=0;
        map<ll,int>:: iterator it;
        for(it=M.begin();it!=M.end();it++){
            x=it->first; //cout<<x<<" "<<M[x]<<endl;
            while(M[x]>0){
                ans+=x+1;
                M[x]-=x+1;
            }
        }
        printf("Case %lld: %lld\n",t,ans);
        M.clear();
    }
    return 0;
}
