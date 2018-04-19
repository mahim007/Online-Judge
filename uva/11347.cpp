#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maax 1000000000000000000
#define limit 1009
vector<ll>V;
ll dv[1009];
bool mark[limit];
int main(){
    mark[0]=mark[1]=1;
    for(ll i=4;i<limit;i=i+2){
        mark[i]=1;
    }
    for(ll i=3;i*i<limit;i=i+2){
        if(!mark[i]){
            for(ll j=i*i;j<limit;j=j+i+i){
                mark[j]=1;
            }
        }
    }
    for(ll i=2;i<limit;i++){
        if(!mark[i]){
            V.push_back(i);
        }
    }
    ll i,j,k,l,n,cnt,ans,t,T,p;
    char s[25];
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld%s",&n,s); //cout<<n<<" "<<s<<endl;
        k=strlen(s);
        ans=1;
        memset(dv,0,sizeof dv);
        for(;n>=2;n=n-k){
            p=n; //cout<<"p:"<<p<<endl;
            for(i=0;V[i]*V[i]<=p;i++){
                cnt=0;
                while(p%V[i]==0){
                    cnt++;
                    p/=V[i];
                } //cout<<" cnt:"<<cnt<<endl;
                dv[V[i]]+=cnt; //cout<<"ans:"<<ans<<endl;
            }
            if(p!=1){
                dv[p]++; //cout<<"ans*2:"<<ans<<endl;
            }
        }
        ll flag=1;
        for(i=2;i<limit;i++){
            if(ans*(dv[i]+1)<=maax){
                ans*=dv[i]+1;
            }
            else{
                flag=0;
                break;
            }
        }
        if(flag){
            printf("Case %lld: %lld\n",t,ans);
        }
        else{
            printf("Case %lld: Infinity\n",t);
        }
    }
    return 0;
}
