#include<bits/stdc++.h>
using namespace std;
#define ll long double
ll n,c;
ll call(ll x){
    return x*(c-(x*n));
}

int main(){
    ll T,t,i,j,k,ans,mx;
    //scanf("%lld",&T);
    cin>>T;
    for(t=1;t<=T;t++){
        //scanf("%lld %lld",&n,&c);
        cin>>n>>c;
        printf("Case %lld: ",(long long int)t);
        if(n==0 || c==0 || n>=c)
            printf("0\n");
        else{
            mx=0;
            ll low=1;
            ll high=c;
            while(low<=high){ //cout<<"lim:"<<low<<" "<<high<<" ";
                ll mid=floor((low+high)/2);
                ll val=call(mid); //cout<<"val:"<<mid<<" "<<val<<endl;
                if(val>=mx){
                    mx=val;
                    ans=mid;
                    high--;
                }
                else{
                    high=mid-1;
                }
            }
            printf("%lld\n",(long long int)round(ans));
        }
    }
    return 0;
}
