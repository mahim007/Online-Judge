#include<bits/stdc++.h>
using namespace std;
#define i64 long long int

bool ispalindrome(string p)
{
    i64 i,j,len;
    i=0;len=p.size();
    for(i=0,j=len-1;i<=len/2;i++,j--)
    {
        if(p[i]!=p[j])
            return 0;
    }
    return 1;
}

int main()
{
    char str[10009];
    string s;
    i64 i,j,siz,T,t,len;
    scanf("%lld",&T);
    getchar();
    for(t=1;t<=T;t++)
    {
        gets(str);
        s.clear();
        len=strlen(str);
        for(i=0;i<len;i++)
        {
            if(str[i]>='a' && str[i]<='z')
            {
                s=s+str[i];
            }
        }
        len=s.size();
        siz=sqrt(len);
        printf("Case #%lld:\n",t);
        if(siz*siz==len)
        {
            if(ispalindrome(s))
                printf("%lld\n",siz);
            else
                printf("No magic :(\n");
        }
        else
            printf("No magic :(\n");
    }
    return 0;
}
