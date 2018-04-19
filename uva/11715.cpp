#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ts=1;
    double u,v,t,a,s;

    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;

        if(n==1)
            {
                scanf("%lf %lf %lf",&u,&v,&t);

                a=(v-u)/t;
                s=u*t+.5*a*t*t;

                printf("Case %d: %0.3lf %0.3lf\n",ts++,s,a);
            }
        if(n==2)
            {
                scanf("%lf %lf %lf",&u,&v,&a);

                s=(v*v-u*u)/(2*a);
                t=(v-u)/a;

                printf("Case %d: %0.3lf %0.3lf\n",ts++,s,t);
            }
        if(n==3)
            {
                scanf("%lf %lf %lf",&u,&a,&s);

                v=sqrt(u*u+2*a*s);
                t=(v-u)/a;

                printf("Case %d: %0.3lf %0.3lf\n",ts++,v,t);
            }
        if(n==4)
            {
                scanf("%lf %lf %lf",&v,&a,&s);

                u=sqrt(v*v-2*a*s);
                t=(v-u)/a;

                printf("Case %d: %0.3lf %0.3lf\n",ts++,u,t);
            }
    }
    return 0;
}
