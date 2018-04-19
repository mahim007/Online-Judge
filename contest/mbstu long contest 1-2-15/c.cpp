#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
i64 gcd(i64 a,i64 b)
{
    if(a<b)
        swap(a,b);
        i64 r;
    if(b<=0)
        return a;
    while(1)
    {
        r=a%b;
        if(r==0)
            return b;
        a=b;
        b=r;
    }
}

int main()
{
    i64 data[201],i,n,k,val,flag;
    char num[200];
    scanf("%lld",&n);
    getchar();
    for(i64 t=1;t<=n;t++)
    {
        k=0;
        memset(data,0,sizeof(data));
        for(i=0;i<200;i++)
            num[i]='\0';
        gets(num);
            i64 len=strlen(num);
            printf("%s %lld\n",num,len);
        flag=0;
            for(i64 z=0;z<len;z++)
            {
                if(isdigit(num[z]))
                {
                    if(flag=0)
                    {
                        flag=1;
                        k++;
                    }
                    data[k]=data[k]*10+(num[z]-'0');
                }
                else
                {
                    flag=0;
                }
            }
        for(i=1;i<k;i++)
            printf("%lld ",data[i]);
        printf("\n");
        i64 res=1;
        for(i=1;i<=k;i++)
            for(i64 j=i+1;j<=k;j++)
        {
            val=gcd(data[i],data[j]);
            if(val>res)
                res=val;
        }
        printf("%lld\n",res);
    }
    return 0;
}
