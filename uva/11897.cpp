#include<bits/stdc++.h>
using namespace std;
#define i64 long long int

int main()
{
    i64 i,j,k,len,num;
    char str[120];
    while(gets(str))
    {
        num=0;
        len=strlen(str);
        if(len==1 && str[0]=='0')
            break;
        for(i=0;i<len;i++)
        {
            num=num*10+(str[i]-'0');
            num=num%17;
        }
        if(num==0)
            printf("1\n");
        else
            printf("0\n");
    }
    return 0;
}
