#include<bits/stdc++.h>
using namespace std;
#define ll long long int

map<ll,ll>M;

int main()
{
    ll n;
    ll i,j,k;

    for(i=0; i<=1000; i++)
    {
        for(j=0; j<=1000; j++)
        {
            ll x=6*i*i+3*j*j;
            M[x]++;
        }
    } //printf("size:%d\n",M.size());
    while(scanf("%lld",&n)==1)
    {
        if((5*n)%6!=0)
        {
            printf("0\n");
            continue;
        }
        else
        {
            ll ans=0;


            for(i=0; i<=1000; i++)
            {
                ll x=(5*n/6)-i*i;
                if(M[x]>0) //printf("i=%lld x=%lld M[x]=%lld\n",i,x,M[x]);
                ans+=M[x];
            }

            printf("%lld\n",ans);
        }
    }

    return 0;
}
