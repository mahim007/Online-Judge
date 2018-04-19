#include<bits/stdc++.h>
using namespace std;

#define maxx 171100
bool prim[maxx];
#define i64 long long int
i64 test[15003];
int main()
{
    i64 i,j,k,n,data,root;

    prim[0]=prim[1]=1;
    for(i=4;i<maxx;i=i+2)
        prim[i]=1;
    root=sqrt(maxx);
    for(i=3;i<root;i=i+2)
    {
        if(prim[i]==0)
        {
            for(j=i*i;j<maxx;j=j+i)
            {
                prim[j]=1;
            }
        }
    }
    k=1;
    for(i=0;i<maxx & k<15003;i++)
    {
        if(prim[i]==0)
        {
            test[k++]=i;
        }
    }

    scanf("%lld",&n);
    for(i64 t=1;t<=n;t++)
    {
        scanf("%lld",&data);
        printf("%lld\n",test[data]);
    }
    return 0;

}
