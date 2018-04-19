#include<bits/stdc++.h>
using namespace std;

#define i64 long long int
#define maxx 10090
#define eps 1e-9
bool tag[maxx];
vector<i64>V;
map<i64,int>M;

int check(i64 n)
{
    if(n<maxx)
        return (!tag[n]);

    if(n%2==0)
        return 0;
    for(i64 i=1;V[i]*V[i]<=n;i++)
    {
        if(n%V[i]==0)
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

    i64 x=0;
    for(i64 i=0;i<=10000;i++)
    {
        i64 n=i;
        i64 p=n*n+n+41;
        int b=check(p);
        if(b==1)
        {
            x++;
            M[i]=x;
        }
        else
        {

            M[i]=x;
        }
    }

    i64 i,j,a,b,total,cnt;
    double res;
    //freopen("10200output","w",stdout);
    while(scanf("%lld %lld",&a,&b)==2)
    {
        if(b<=39)
        {
            printf("100.00\n");
            continue;
        }

        total=b-a+1;
        cnt=0;

        if(a==0)
            cnt=1;
        else
        {
            cnt=M[a]-M[a-1];
        }

        cnt=cnt+(M[b]-M[a]);

      /*  for(i=a;i<=b;i++)
        {
            if(M[i]==1)
                cnt++;
        } */

        res=(((double)cnt/(double)total)*100)+eps;
        printf("%0.2lf\n",res);
    }
    return 0;
}
