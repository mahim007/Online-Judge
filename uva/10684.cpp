#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[10009];
int main(){
    ll n,i,j,ans,mx;
    while(scanf("%lld",&n)==1){
        if(n==0) break;
        for(i=1;i<=n;i++){
            scanf("%lld",&arr[i]);
        }
        i=1;
        j=1;
        ans=0;
        mx=-9999999999999999;
        while(i<=n){
            while(i<=n && ans>=0){
                ans+=arr[i];
                if(ans>mx) mx=ans;
                i++;
            }
            while(j<i){
                ans-=arr[j];
                j++;
            }
        }
        if(mx>0){
            printf("The maximum winning streak is %lld.\n",mx);
        }
        else{
            printf("Losing streak.\n");
        }
    }
    return 0;
}
