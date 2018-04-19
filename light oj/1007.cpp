#include<bits/stdc++.h>
using namespace std;
#define lli unsigned long long int
#define llf long double
#define lim 5000009
bool mark[lim];
lli phi[lim];
//ll sum[lim];
void sievephi(){
    lli i,j;
    for(i=1;i<lim;i++) phi[i]=i;
    mark[1]=1;
    phi[1]=1;
    for(i=2;i<lim;i=i+2){
        if(i!=2) mark[i]=1;
        phi[i]=phi[i]/2;
    }

    for(i=3;i<lim;i=i+2){
        if(!mark[i]){
            phi[i]-=1;
            for(j=i+i;j<lim;j=j+i){
                mark[j]=1;
                phi[j]=(phi[j]*(i-1))/i;
            }
        }
    }

    phi[1]=0;
    for(i=2;i<lim;i++){ //cout<<"i:"<<i<<" "<<phi[i]<<endl;
        phi[i]=phi[i]*phi[i]+phi[i-1];
    }
}

int main(){
    lli T,t,i,j,k,a,b;
    sievephi();
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&a,&b);
        printf("Case %lld: %llu\n",t,(lli)(phi[b]-phi[a-1]));
    }
    return 0;
}
