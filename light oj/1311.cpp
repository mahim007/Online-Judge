#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll T,t;
    double v1,v2,v3,a1,a2,S,s1,s2,s3,tym;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lf %lf %lf %lf %lf",&v1,&v2,&v3,&a1,&a2);
        s1=(v1*v1)/(2*a1); //cout<<s1<<endl;
        s2=(v2*v2)/(2*a2); //cout<<s2<<endl;
        S=s1+s2;
        tym=max(v1/a1,v2/a2);
        s3=tym*v3;
        printf("Case %lld: %0.9lf %0.9lf\n",t,S,s3);
    }
    return 0;
}
