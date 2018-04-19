#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
#define maxx 5050
#define maxx2 680
bool range[maxx];
i64 prim[maxx2];


int main()
{
        range[0]=range[1]=1;
    for(i64 i=4;i<maxx;i=i+2)
        range[i]=1;
    i64 root=(i64)sqrt(maxx);
    for(i64 i=3;i<=root;i=i+2)
    {
        if(range[i]==0)
        {
            for(i64 j=i*i;j<=maxx;j=j+i)
            {
                range[j]=1;
            }
        }
    }

    i64 k=0;
    for(i64 i=0;i<maxx;i++)
    {
        if(range[i]==0)
            prim[k++]=i;
    }
   i64 T,t,n,p,i,dif;
   i64 x;
   scanf("%lld",&T);
   for(t=1;t<=T;t++)
   {
       dif=-1;
       scanf("%lld",&n);
       for(p=1;p<=n/2;p++)
       {
           for(i=0;prim[i]<=n;i++)
           {
               if(p*prim[i]>n)
                break;
               if(((p*prim[i])<=n) && (((p+1)*prim[i])>n))
               {
                   if(dif<(n-(p*prim[i])))
                    {
                        dif=n-p*prim[i];
                    x=prim[i];
                    }
               }
           }
       }
       printf("%lld\n",x);
   }
   return 0;
}
