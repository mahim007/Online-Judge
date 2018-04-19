#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
#define maxx 8388609
bool tag[maxx];
vector<i64>V;

bool isprime(i64 p)
{
    if(p<maxx)
        return !tag[p];
    if(!(p&1))
        return 0;
    for(i64 i=3;i*i<=p;i=i+2)
    {
        if(p%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    tag[0]=tag[1]=1;
    for(i64 i=4;i<maxx;i=i+2)
        tag[i]=1;
    for(i64 i=3;i*i<maxx;i=i+2)
    {
        if(tag[i]==0)
        {
            for(i64 j=i*i;j<maxx;j=j+i+i)
                tag[j]=1;
        }
    }
    for(i64 i=2;i<maxx;i++)
    {
        if(tag[i]==0)
            V.push_back(i);
    }

    i64 i,j,k,n,ans,flag;
    while(scanf("%lld",&n)==1)
    {
        flag=1;
        if(n==0)
            break;

        if(tag[n]==0)
        {
            i64 p=(i64)(pow(2,n)-1);
            if(isprime(p))
                flag=1;
            else
                flag=2;
        }
        else
        {
            flag=3;
        }
        if(flag==1)
        {
            ans=(i64)((pow(2,n-1))*(pow(2,n)-1));
            printf("Perfect: %lld!\n",ans);
        }
        else if(flag==2)
        {
            printf("Given number is prime. But, NO perfect number is available.\n");
        }
        else if(flag==3)
        {
            printf("Given number is NOT prime! NO perfect number is available.\n");
        }
    }
    return 0;
}
