#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
vector<i64>V;
i64 __lcm(i64 n)
{
    i64 res=0;
    for(i64 i=0;i<V.size();i++)
    {
        i64 x=V[i];
        for(i64 j=i;j<V.size();j++)
        {
          i64 lcm,y;
          y=V[j];
          lcm=(x/__gcd(x,y))*y;
         // printf("x=%lld y=%lld lcm=%lld ",x,y,lcm);
          if(lcm==n)
          {
            res++;
           // printf("%lld\n",res);
          }
        }
    }
    return res;
}

int main()
{
    i64 n,div,pairs,res;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;

        for(i64 i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                V.push_back(i);
                if(i!=(n/i))
                    V.push_back(n/i);
             //   printf("%lld %lld ",i,n/i);
            }
        }
        div=V.size();
      //  printf("\ndiv=%lld\n",div);
        pairs=__lcm(n);
      //  printf("pair=%lld\n",pairs);
        res=pairs;
        printf("%lld %lld\n",n,res);
        V.clear();
    }
    return 0;
}
