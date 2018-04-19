#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
int main()
{
    i64 n,i,j,k,save;
    i64 digit[10];
    while(scanf("%lld",&n)==1)
    {
        memset(digit,0,sizeof(digit));
        if(n==0)
            break;
        save=n;
        while(n!=0)
        {
            i=n;
            while(i)
            {
                i64 r=i%10;
                digit[r]++;
                i=i/10;
            }
            n--;
        }
        for(i64 i=0;i<10;i++)
            printf("%lld %lld\n",i,digit[i]);
      /*  printf("%lld! --\n",save);
        printf("   (%lld)    %lld    (%lld)    %lld    (%lld)    %lld    (%lld)    %lld    (%lld)    %lld\n",0,digit[0],1,digit[1],2,digit[2],3,digit[3],4,digit[4]);
        printf("   (%lld)    %lld    (%lld)    %lld    (%lld)    %lld    (%lld)    %lld    (%lld)    %lld\n",5,digit[5],6,digit[6],7,digit[7],8,digit[8],9,digit[9]);
        */
    }
    return 0;
}







