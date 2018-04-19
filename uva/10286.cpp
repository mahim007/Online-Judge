#include<bits/stdc++.h>
using namespace std;
#define eps 1e-15
#define factor 1.0673956817111818692592637626711
int main(){
    double p,s;
    while(scanf("%lf",&p)==1){
        //printf("%0.10lf\n",(double)(sin(108)/sin(63)));
        //s=p*(sin(108)/sin(63))+eps;
        //printf("%0.10lf\n",s);
        s=p*factor;
        printf("%.10f\n",s+eps);
    }
    return 0;
}
