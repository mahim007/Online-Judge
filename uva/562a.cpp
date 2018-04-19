#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[109];
int main(){
    ll i,j,k,n,m,dv,t,T,sum;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        sum=0;
        for(i=1;i<=n;i++){
            scanf("%lld",&arr[i]);
            sum+=arr[i]; //cout<<"sum:"<<sum<<endl;
        }
        sort(arr+1,arr+n+1);
        ll mid=(sum/2)+1; //cout<<"mid:"<<mid<<endl;
        i=1;
        j=1;
        ll total=0;
        dv=9999999999;
        while(i<=n){
            while(total<=mid && i<=n){ //cout<<"adding...\n";
                if(mid-total<dv){
                    dv=mid-total;
                    k=total;
                }
                total+=arr[i++];
                 //cout<<"total="<<total<<endl;

            }
            while(total>mid){ //cout<<"subtracting..\n";
                total-=arr[j++]; //cout<<"total:"<<total<<endl;
            }
            if((mid-total)<dv){
                dv=mid-total;
                k=total;
            }
        }
        printf("%lld\n",(ll)abs((sum-k)-k));
    }
    return 0;
}
