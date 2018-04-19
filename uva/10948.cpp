#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
#define maxx 1000009
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
            {
                tag[j]=1;
            }
        }
    }
    for(i64 i=2;i<maxx;i++)
    {
        if(tag[i]==0)
        V.push_back(i);
    }

    i64 n,i,j,a,b;
    int flag;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        flag=0;

        i64 s=V.size();
        printf("%lld:\n",n);
        //cout<<"size: "<<s<<endl;
        for(i=0;V[i]<=n/2;i++)
        {
            if(flag==1)
                break;
                a=V[i];
                b=n-V[i];
                if(tag[a]==0 && tag[b]==0)
                {
                    printf("%lld+%lld\n",a,b);
                    flag=1;
                    break;
                }
        }

        if(flag==0)
            printf("NO WAY!\n");
    }
    return 0;
}
