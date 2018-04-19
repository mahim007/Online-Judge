#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
#define maxx 1009
#define maxx2 180
bool range[maxx];
i64 prim[maxx2];

int main()
{
    //freopen("inputfile.txt", "r", stdin);
//freopen("outputfilename", "w", stdout);
    range[0]=1;
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

    i64 N,C,p,q,i,cntr,mid;
    while(scanf("%lld %lld",&N,&C)==2)
    {
        cntr=0;
        for(i64 j=0;prim[j]<=N && j<169;j++)
        {
            cntr++;
        }
        printf("%lld %lld:",N,C);
        i64 c;
        if(cntr%2==0)
            c=2*C;
        else
            c=(2*C)-1;

        if(cntr-c>0)
            p=(cntr-c)/2;
        else
            p=0;

        if(cntr-c>0)
            q=p+c;
        else
            q=cntr;

            for(i=p;i<q;i++)
                printf(" %lld",prim[i]);
            printf("\n\n");
    }
    return 0;
}

