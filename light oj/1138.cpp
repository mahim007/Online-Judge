#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll find_5(ll d){
    ll ans=0;
    while(d>0){
        ans+=d/5;
        d=d/5;
    }
    return ans;
}

int main(){
    ll T,t,i,j,n,res,q;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&q);
        ll low=1;
        ll high=q;
        res=-99999;
        while(low<=high){
            ll mid=(low+high)/2;
            ll tmp=find_5(mid*5); //cout<<"mid:"<<mid*5<<" tmp:"<<tmp<<endl;
            if(tmp==q){
                res=mid*5;
                break;
            }
            else if(tmp<q){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        if(res<0){
            printf("Case %lld: impossible\n",t);
        }
        else{
            printf("Case %lld: %lld\n",t,res);
        }
    }
    return 0;
}
