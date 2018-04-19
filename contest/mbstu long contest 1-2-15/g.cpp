#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
int main()
{
    i64 prime[]= {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    i64 n,save,i,j,cnt,flag;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;

        i64 reader[25]={0};
        save=n;
        while(n!=1)
        {
            i=n;
            j=0;

            while(i>1)
            {
                cnt=0;
                while(i%prime[j]==0)
                {
                    i=i/prime[j];
                    cnt++;
                }
                reader[j]+=cnt;
                j++;
            }
            n--;
        }

        for(i=24;i>=0;i--)
        {
            if(reader[i]!=0)
            {
                break;
            }
        }
        j=i;
        if(j>=15)
            flag=0;
        else
            flag=15;

        printf("%3lld! =",save);
        for(i=0;i<=j;i++)
        {
            printf("%3lld",reader[i]);
            flag++;
            if(flag==15)
                printf("\n%6c",' ');
        }
        printf("\n");
    }
    return 0;
}
