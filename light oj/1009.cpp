#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maax 25000
ll arr[maax];
ll V,L;
int main()
{
    ll T,t,i,u,v,n;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        L=V=0;
        scanf("%lld",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%lld %lld",&u,&v);
            if(arr[u]==0)
            {
                if(arr[v]==0)
                {
                    arr[u]=1;
                    V++;
                }
                else if(arr[v]==1)
                {
                    arr[u]=2;
                    L++;
                }
                else if(arr[v]==2)
                {
                    arr[u]=1;
                    V++;
                }
            }
            if(arr[v]==0)
            {
                if(arr[u]==0)
                {
                    arr[v]=2;
                    L++;
                }
                else if(arr[u]==1)
                {
                    arr[v]=2;
                    L++;
                }
                else if(arr[u]==2)
                {
                    arr[v]=1;
                    V++;
                }
            }
        }
        printf("Case %lld: %lld\n",t,max(V,L));
        memset(arr,0,sizeof(arr));
    }
    return 0;
}
