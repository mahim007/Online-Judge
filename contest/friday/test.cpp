#include<bits/stdc++.h>
using namespace std;
#define ll long long int

map<ll,ll>M;

int main()
{
    ll n;
    ll i,j,k;
    n=0;
    while(n++<=1000)
    {
        ll ans=0;
        for(i=0;i<=100;i++)
        {
            for(j=0;j<=100;j++)
            {
                for(k=0;k<=100;k++)
                    if((i*i*36)+(j*j*18)+(6*k*k)==5*n)
                        ans++;
            }
        }
        if(ans>0)
        printf("n = %lld ans = %lld\n",n,ans);
    }

    return 0;
}
