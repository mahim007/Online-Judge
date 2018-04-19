#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
char str[100009];

int main()
{
    i64 i,len,n;
    while(gets(str))
    {
        len=strlen(str);
        for(i=0;i<len;i++)
        {
            if(str[i]>='a' && str[i]<='y')
                str[i]++;
            else if(str[i]=='z')
                str[i]='a';
        }
        printf("%s\n",str);
    }
}
