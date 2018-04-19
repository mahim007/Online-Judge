#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maxx 20009
ll arr[maxx];
int main(){
    ll T,t,i,j,k,n,l,h,ans,mx,x,y;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        ll sign=0;
        for(i=1;i<n;i++){
            scanf("%lld",&arr[i]);
            if(arr[i]>0) sign=1;
        }

        mx=-999999999999999;
        i=1;
        j=1;
        ans=0;
        x=y=0;
        while(i<n){
            while(i<n && ans>=0){
                ans+=arr[i]; //cout<<"+:"<<ans<<endl;
                if(ans>mx){
                    mx=ans;
                    x=j;
                    y=i+1;
                }
                else if(ans==mx){
                    if((i+1-j)>(y-x)){
                        x=j;
                        y=i+1;
                    }
                }
                i++;
            }
            while(j<i){
                ans-=arr[j]; //cout<<"-:"<<ans<<endl;
                j++;
            }
        }
        if(mx>0){
            printf("The nicest part of route %lld is between stops %lld and %lld\n",t,x,y);
        }
        else{
            printf("Route %lld has no nice parts\n",t);
        }
    }
    return 0;
}
