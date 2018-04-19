#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
i64 geese[20009],knight[20009];
i64 G,K;
i64 simulation()
{
    i64 i=1,k=1,sum=0;
    while(k<=K)
    {
        if(i>G) return sum;
        if(knight[k]>=geese[i])
        {
            sum=sum+knight[k];
            k++;
            i++;
        }
        else
        {
            k++;
        }
    }
    if(i>G) return sum;
    else return -1;
}
int main()
{
    i64 i,j,flag,ans;
    while(scanf("%lld %lld",&G,&K)==2)
    {
        if(G==0 && K==0)
            break;
        for(i=1;i<=G;i++)
            scanf("%lld",&geese[i]);
        for(j=1;j<=K;j++)
        {
            scanf("%lld",&knight[j]);
        }

        if(G>K)
        {
            printf("Loowater is doomed!\n");
            continue;
        }
        sort(geese+1,geese+G+1);
        sort(knight+1,knight+K+1);

        ans=simulation();
        if(ans==-1)
            printf("Loowater is doomed!\n");
        else
            printf("%lld\n",ans);
    }
    return 0;
}
