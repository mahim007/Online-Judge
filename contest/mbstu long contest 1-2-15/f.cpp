#include<bits/stdc++.h>
using namespace std;
#define maxx 1000009
#define i64 long long int
bool flag[maxx];
i64 prime[maxx/2];
map<i64,int>maap;
int main()
{
    flag[0]=flag[1]=1;
    for(i64 i=4;i<=maxx;i=i+2)
        flag[i]=1;
    for(i64 i=3;i*i<=maxx;i=i+2)
    {
        if(flag[i]==0)
        {
            for(i64 j=i*i;j<=maxx;j=j+i+i)
            {
                flag[j]=1;
            }
        }
    }
    i64 k=0;
    for(i64 i=1;i<=maxx;i++)
    {
        if(flag[i]==0)
        {
            prime[k]=i;
            if(maap.find(i*i)==maap.end())
                maap[i]=3;
            k++;
        }
    }

    i64 N,divisor,cntr,T,t;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%lld",&N);
        i64  root=sqrt(N);
        if((root*root==N)&&(maap.find(root)!=maap.end()))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

