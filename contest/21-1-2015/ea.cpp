#include<bits/stdc++.h>
using namespace std;
#define i64 long long int

vector<i64>V;
i64 m,N;
i64 rslt[100005];

int main()
{
    i64 q,s;
    while(scanf("%lld %lld",&N,&q)==2)
    {
        s=0;
        for(i64 i=1;i<=N;i++)
    {
        i64 x;
        scanf("%lld",&x);
        V.push_back(x);
        s+=x;
    }

    rslt[1]=0;

    i64 h=0;
    for(i64 g=2;g<=N;g++)
    {
        m=m+V[h++];
        rslt[g]=m;

    }
    i64 endd;
    for(i64 z=1;z<=q;z++)
    {
        i64 t;
        scanf("%lld",&t);
        while(t>=s)
        {
            t-=s;
        }

       for(i64 i=1;i<=N;i++)
       {
                          if(i==N)
               {
                   if(t>=rslt[i] && t<s)
                   {
                       printf("%lld\n",i);
                        break;
                   }
               }
           if(t>=rslt[i] && t<rslt[i+1])
           {

               printf("%lld\n",i);
               break;
           }
       }



    }

    }
    return 0;
}

