#include<stdio.h>
#define i64 long long int
int main()
{
    i64 lst[100009],n,s,cnt,i;
    while(scanf("%lld",&s)==1)
    {
        for(i=0;i<s;i++)
        {
            scanf("%lld",&lst[i]);
        }

        sort(lst,lst+s);
        cnt=0;
        for(i=0;i<s;i++)
        {
            if(i==s-1)
                printf("%lld\n",lst[i]-cnt);
            else
                printf("%lld ",lst[i]-cnt);
            cnt++;
        }
    }
    return 0;
}
