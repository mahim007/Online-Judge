#include<bits/stdc++.h>
using namespace std;
#define i64 unsigned long long int
i64 factorial(i64 n)
{
    i64 fact=1;
    for(i64 i=1;i<=n;i++)
        fact=fact*i;
    return fact;
}
int main()
{
    i64 T,t,n,len,i,j,fact,counter,res;
    string str;
    scanf("%llu",&T);
    for(t=1;t<=T;t++)
    {
        cin>>str;
        n=str.length();
        res=1;
        for(i=1;i<=n;i++)
            res=res*i;
        for(i=0;i<n-1;i++)
        {
            counter=1;
            if(str[i]=='*')
                continue;
            for(j=i+1;j<n;j++)
            {
                if(str[i]==str[j])
                {
                    counter++;
                    str[j]='*';
                }
            }
            if(counter>1)
            {
                fact=factorial(counter);
                res=res/fact;
            }
        }
        printf("Data set %llu: %llu\n",t,res);
        str.clear();
    }
    return 0;
}






