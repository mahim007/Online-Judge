#include<bits/stdc++.h>
using namespace std;

#define i64 long long int


int main()
{ //freopen("11958 output","w",stdout);
    i64 T,t,i,j,n,hour,minn,HH,MM,minit,ans,hh,mm,th,tm;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        ans=99999;
        scanf("%lld %lld:%lld",&n,&hour,&minn);
        //cout<<"HH:"<<HH<<" "<<MM<<endl;
        for(i=1;i<=n;i++)
        {
            scanf("%lld:%lld %lld",&hh,&mm,&minit);
            HH=hour;
            MM=minn;
            //cout<<"hh:"<<hh<<" mm:"<<mm<<endl;
            if(MM>mm)
            {
                tm=(60-MM)+mm;
                HH++;
            }
            else
                tm=mm-MM;

            if(HH>hh)
            {
                th=(24-HH)+hh;
            }
            else
                th=hh-HH;
            //cout<<"HH:"<<HH<<" "<<MM<<endl;
            //cout<<"th:"<<th<<" tm:"<<tm<<endl;
            ans=min(ans,((th*60)+tm+minit));
            //cout<<"ans:"<<ans<<endl;
        }
        printf("Case %lld: %lld\n",t,ans);
    }
    return 0;
}
