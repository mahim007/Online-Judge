#include<bits/stdc++.h>
using namespace std;
#define maxx 1000009
#define i64 long long int
bool range[maxx];
i64 digit[maxx];
void digitprime()
{
    i64 cntr=0;
    for(i64 i=0;i<maxx;i++){
    if(range[i]==0)
    {
                i64 nmbr=i;
                i64 nmbr2=0;

                    while(nmbr)
                    {
                        nmbr2=nmbr2+nmbr%10;
                        nmbr=nmbr/10;
                    }
                    nmbr=nmbr2;
                    if(range[nmbr]==0)
                        cntr++;
    }
    digit[i]=cntr;
  }
}
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

    digitprime();

    i64 T,t,n1,n2,res,nmbr;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        res=0;
        scanf("%lld %lld",&n1,&n2);
        if(n1==0)
            res=digit[n2];
        else
            res=digit[n2]-digit[n1-1];
        printf("%lld\n",res);
    }
    return 0;
}
