#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,len,flag;
    char s[9999];
    flag=0;

    while(gets(s))
    {
        len=strlen(s);

        for(i=0;i<len;i++)
        {
            if(s[i]==34)
            {
                flag++;
                if(flag%2)
                {
                    printf("``");
                    continue;
                }
                else
                   printf("''");
            }
            else
                cout<<s[i];
        }
        printf("\n");
    }
    return 0;
}
