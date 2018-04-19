#include<bits/stdc++.h>
using namespace std;

#define i64 unsigned long long int
#define maxx 50000

bool tag[maxx];
vector<i64>V;

i64 square(i64 n)
{
    return (n*n);
}

long bigmod(i64 b, i64 p, i64 m)
{
    if (p==0)
        return 1;
    else if (p%2==0)  //(p%2 == 0) or P == even number
        return  square(bigmod(b,p/2,m))%m;
    else
        return ((b % m)*bigmod(b,p-1,m))%m;
}

i64 check(i64 n)
{
    if(n<maxx)
        return (tag[n]);

    if(n%2==0)
        return 1;
    for(i64 i=1;V[i]*V[i]<=n;i++)
    {
        if(n%V[i]==0)
            return 1;
    }
    return 0;
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

    i64 p,a,flag;
    while(scanf("%llu %llu",&p,&a)==2)
    {
        if(p==0 && a==0)
            break;

        flag=check(p);
        if(flag==0)
        { //cout<<p<<" is a prime.\n";
            printf("no\n");
            continue;
        }
        else
        {
            i64 x=bigmod(a,p,p);
            //cout<<"x:"<<x<<endl;
            if(x==a)
                printf("yes\n");
            else
                printf("no\n");
        }
    }
    return 0;
}
