#include<bits/stdc++.h>
using namespace std;
#define i64 long long int

bool isprime(i64 val)
{
    if(val==0)
        return 0;
    if(val==1 || val==2 || val==3)
        return 1;
    if(val%2==0)
        return 0;
    i64 root=(i64)sqrt(val);
    for(i64 i=3;i<=root;i=i+2)
    {
        if(val%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    string word;
    char w[22];
    while(scanf("%s",w)==1)
    {
        word=w;
        i64 len=word.length();
        i64 val=0;
        for(i64 i=0;i<len;i++)
        {
            if(word[i]>='A' && word[i]<='Z')
            {
                val=val+word[i]-38;
            }
            else
            {
                val=val+word[i]-96;
            }
        }
            bool res=isprime(val);
            if(res==1)
            {
                printf("It is a prime word.\n");
            }
            else
                printf("It is not a prime word.\n");
            word.clear();
    }
    return 0;
}
