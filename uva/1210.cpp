#include<bits/stdc++.h>
using namespace std;

#define i64 long long int
#define maxx 10100

bool tag[maxx];
vector<i64>V;

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

    i64 i,j,k,n,low,high,way,sum;

    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;

        way=sum=0;
        if(tag[n]==0)
            way++;

        i64 s=V.size();
        i=0;
        j=0;

        while(V[i]<n)
        {
            while(sum<=n)
            {
                if(sum==n)
                {
                    way++;
                }
                sum=sum+V[i++];
            }

            while(sum>n)
            {
                if(sum==n)
                {
                    way++;
                }
                sum=sum-V[j++];
            }
        }
        printf("%lld\n",way);
    }
    return 0;
}
