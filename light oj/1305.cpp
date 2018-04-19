#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll T,t,i,j;
    ll ax,ay,bx,by,cx,cy,dx,dy;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld %lld %lld %lld %lld",&ax,&ay,&bx,&by,&cx,&cy);
        dx=ax+cx-bx;
        dy=ay+cy-by;
        ll area;
        ll side;
        area=abs(ax*(by-cy)+bx*(cy-ay)+cx*(ay-by));

        printf("Case %lld: %lld %lld %lld\n",t,dx,dy,area);
    }
    return 0;
}
