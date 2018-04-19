#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[4];

int main(){
    ll x,y,i,j,cnt=0;
    scanf("%lld %lld",&x,&y);
    a[1]=a[2]=a[3]=y;
    while(1){
        if(a[1]>=x && a[2]>=x && a[3]>=x) break;
        sort(a+1,a+1+3);
        a[1]=(a[2]+a[3])-1;
        cnt++; //cout<<a[1]<<" "<<a[2]<<" "<<a[3]<<endl;
    }

    printf("%lld\n",cnt);
    return 0;
}
