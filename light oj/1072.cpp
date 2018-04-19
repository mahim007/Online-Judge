#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
#define eps 1e-9
int main(){
    int T,t,i,n;
    double R,r;
    scanf("%d",&T);
    for(t=1;t<=T;t++){
        scanf("%lf %d",&R,&n);
        printf("Case %d: %0.10lf\n",t,sin(pi/n)*R/(sin(pi/n)+1)+eps);
    }
    return 0;
}
