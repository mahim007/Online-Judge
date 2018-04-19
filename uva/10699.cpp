#include<bits/stdc++.h>
using namespace std;

#define i64 long long int
#define maax 1000009
bool tag[maax];
vector<i64>V;

int main()
{
    tag[0]=tag[1]=1;
    for(i64 i=4;i<maax;i=i+2)
        tag[i]=1;
    for(i64 i=3;i*i<maax;i=i+2)
    {
        if(tag[i]==0)
        {
            for(i64 j=i*i;j<maax;j=j+i+i)
                tag[j]=1;
        }
    }
    for(i64 i=1;i<maax;i++)
    {
        if(tag[i]==0)
            V.push_back(i);
    }

    i64 n,i,j,ans,num;
    while(scanf("%lld",&num)==1)
    {
        if(num==0)
            break;
        ans=0;
        n=num;
        for(i=0;V[i]*V[i]<=n;i++)
        {
            if(n%V[i]==0)
            {
                ans++;
                while(n%V[i]==0)
                {
                    n=n/V[i];
                }
            }
        }
        if(n!=1)
            ans++;
        printf("%lld : %lld\n",num,ans);
    }
    return 0;
}
