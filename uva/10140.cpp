#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
#define maxx 47000
bool isprime[maxx];
i64 prime[maxx/2];
i64 rut;
vector<i64>V;

int main()
{
    isprime[0]=isprime[1]=1;
    for(i64 i=4;i<=maxx;i=i+2)
        isprime[i]=1;
    i64 root=sqrt(maxx);
    for(i64 i=3;i<=root;i=i+2)
    {
        if(isprime[i]==0)
        {
            for(i64 j=i*i;j<=maxx;j=j+i+i)
                isprime[j]=1;
        }
    }
    i64 k=0;
    for(i64 i=0;i<=maxx;i++)
    {
        if(isprime[i]==0)
            prime[k++]=i;
    }

    i64 l,u,close1,n,close2,far1,far2,res,i,j;
    while(scanf("%lld %lld",&l,&u)==2)
    {
        if(l<2)
            l=2;
        if(u<l)
            u=l;
        i64 d=u-l+1;
        bool check[d];
        memset(check,0,sizeof(check));
        for(i=0;prime[i]*prime[i]<=u;i++)
        {
            i64 p=prime[i];
            i64 start=ceil((double)l/(double)p);
            if(start==1)
                start++;

            for(j=start;j*p-l<d;j++)
            {
                check[j*p-l]=1;
            }
        }
        for(j=0;j<d;j++)
            if(check[j]==0)
                V.push_back(l+j);


        if(V.size()<2)
        {
            printf("There are no adjacent primes.\n");
            V.clear();
        }
        else
        {
            i64 s=V.size();
            i64 closest=999999999999;
            i64 farest=-1;
            i64 val;

            for(i64 z=0;z<s-1;z++)
            {
                val=V[z+1]-V[z];
                if(val<closest)
                {
                    close1=V[z];
                    close2=V[z+1];
                    closest=val;
                }
                if(val>farest)
                {
                    far1=V[z];
                    far2=V[z+1];
                    farest=val;
                }
            }
            printf("%lld,%lld are closest, %lld,%lld are most distant.\n",close1,close2,far1,far2);
            V.clear();
        }
    }
    return 0;
}
