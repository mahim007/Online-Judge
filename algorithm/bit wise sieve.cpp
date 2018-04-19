#include<bits/stdc++.h>
using namespace std;
#define M 100
int flag[M/64+2];
#define on(x) (flag[x/30] & (1<<((x%30))))
#define mark(x) flag[x/30] |= (1<<((x%30)))

int main()
{
    for(int i=3;i*i<=M;i=i+2)
    {
        if(!on(i))
        {
            for(int j=i*i;j<=M;j=j+i+i)
            {
                mark(j);
            }
        }
    }

    for(int i=1;i<=M;i++)
    {
        if( i>1 && (i==2 ||(i&1)&& !on(i)))
            printf("%d ",i);
    }
    return 0;
}
