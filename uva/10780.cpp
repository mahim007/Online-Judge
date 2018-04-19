#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
#define maxx 5009
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

    i64 n,m,p,q,i,j,res,T,t,x;
    //freopen("10780output","w",stdout);
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        res=999999999;
        scanf("%lld %lld",&m,&n);
        printf("Case %lld:\n",t);

        if(n==1)
        {
            printf("Impossible to divide\n");
            continue;
        }

        for(i=0;V[i]*V[i]<=m;i++)
        {
            p=V[i]; //cout<<"p:"<<p<<endl;
            q=0;
            //x=m;
            if(m%p==0)
            {
                while(m%p==0)
                {
                    q++;
                    m=m/p;
                } //cout<<"q:"<<q<<endl;

                i64 num=1;
                x=0;
                for(j=1;j<=n;j++)
                {
                    num=j; //cout<<"num:"<<num<<endl;
                    if(num%p==0)
                    {
                        while(num%p==0)
                        {
                            x++;
                            num=num/p;
                        }
                    }
                } //cout<<"x:"<<x<<endl;

                res=min(res,x/q);
                //cout<<"res:"<<res<<endl;
            }
        }
        if(m!=1)
        { //cout<<"m:"<<m<<endl;
            x=0;
            i64 num=1;
            for(j=1;j<=n;j++)
            {
                num=j; //cout<<"num:"<<num<<endl;
                if(num%m==0)
                {
                    while(num%m==0)
                    {
                        x++;
                        num=num/m;
                    }
                }
            } //cout<<"x:"<<x<<endl;
            res=min(res,x); //cout<<"res:"<<res<<endl;
        }

        if(res==0)
            printf("Impossible to divide\n");
        else
            printf("%lld\n",res);
    }
    return 0;
}
