#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
#define maxx 65536
bool tag[maxx];
vector<i64>V;

bool isprime(i64 n)
{
    for(i64 i=1;V[i]*V[i]<=n;i++)
    {
        if(n%V[i]==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    tag[0]=tag[1]=1;
    for(i64 i=4;i<=maxx;i=i+2)
        tag[i]=1;
    for(i64 i=3;i<=maxx;i=i+2)
    {
        if(tag[i]==0)
        {
            for(i64 j=i*i;j<=maxx;j=j+i+i)
                tag[j]=1;
        }
    }
    for(i64 i=2;i<=maxx;i++)
    {
        if(tag[i]==0)
            V.push_back(i);
    }

    i64 T,t,i,j,k,n;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%lld",&n);
        for(i=n-1;i>=2;i--)
        {
            if(i<=maxx)
            {
                if(!tag[i])
                {
                    printf("%lld\n",i);
                    break;
                }
            }

            if(i&1)
            {
                int p=isprime(i);
                if(p==true)
                printf("%lld\n",i);
            }
        }
    }
    return 0;
}
