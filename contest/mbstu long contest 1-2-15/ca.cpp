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
    i64 n,flag,k,val;
    vector<i64>data;
    char digit[100],ch;
    scanf("%lld",&n);
    getchar();
    for(i64 t=1;t<=n;t++){
    data.clear();
        k=0;
     flag=1;
     val=0;
    while(1)
    {
        ch=getchar();
        if(isdigit(ch))
        {
            flag=1;
            val=val*10+(ch-'0');
        }
        else if(ch==' ')
        {
            if(flag==1)
            {
                flag=0;
                data.push_back(val);
                val=0;
            }
        }
        else
            {
                if(flag==1)
                    data.push_back(val);
                break;
            }
    }
    i64 res=1;
        for(i64 i=0;i<data.size();i++)
            for(i64 j=i+1;j<data.size();j++)
        {
            val=gcd(data[i],data[j]);
            if(val>res)
                res=val;
        }
        printf("%lld\n",res);
  }
  return 0;
}
