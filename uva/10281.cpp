#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
int main()
{
    double prehh,premm,press,hh,mm,ss,i,j,speed,ln,flag,tym,dist,pspee;
    double ans;
    char s[15],c;
    prehh=premm=press=hh=mm=ss=speed=ans=pspee=0;
    while(scanf("%lf:%lf:%lf%c",&hh,&mm,&ss,&c)!=EOF)
    {
        dist=0;
        flag=0;
        tym=0;
        if(c==' ')
        {
            scanf("%lf",&speed);
            flag=1;
        }

        {
            //printf("pre %lld %lld %lld\n",prehh,premm,press);
            i64 t1,t2,t3;
            t1=ss-press;
            if(t1<0)
            {
                t1=60+t1;
                premm++;
            }

            t2=mm-premm;
            if(t2<0)
            {
                t2=60+t2;
                prehh++;
            }

            t3=hh-prehh;
            //printf("now %lld %lld %lld\n",hh,mm,ss);
            tym=t1+(t2*60)+(t3*60*60);
            //printf("duration:%lld\n",tym);
            ans=ans+((tym*pspee)/3600);
            if(flag==0)
            printf("%02.0lf:%02.0lf:%02.0lf %0.2lf km\n",hh,mm,ss,ans);
            prehh=hh;
            premm=mm;
            press=ss;
            pspee=speed;
        }
    }
    return 0;
}
