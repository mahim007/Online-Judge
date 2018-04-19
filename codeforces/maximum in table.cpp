#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
i64 data[10][10];

int main()
{
    i64 n;
    scanf("%lld",&n);
    for(i64 i=0;i<n;i++)
    {
        for(i64 j=0;j<n;j++)
        {
            if(i==0 || j==0)
            {
                data[i][j]=1;
            }
            else
            {
                data[i][j]=data[i-1][j]+data[i][j-1];
            }
        }
    }
    printf("%lld\n",data[n-1][n-1]);
    return 0;
}
