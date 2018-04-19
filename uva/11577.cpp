#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[210],ch;
    int n,t;
    scanf("%d",&n);
    getchar();
    for(t=1;t<=n;t++)
    {
        gets(str);
        int len=strlen(str);

        map<char,int>txt;
        int i=1;
        int indx=97;
        for(i=1;i<=26;i++)
        {
            txt[indx++]=0;
        }

        for(i=0;i<len;i++)
        {
            ch=tolower(str[i]);
            if(ch>=97 && ch<=122)
            {
                txt[ch]++;
            }
        }

        int maxx=-1;
        int pos;

        for(i=97;i<=122;i++)
        {
            if(maxx<txt[i])
            {
                maxx=txt.find(i)->second;
                pos=txt.find(i)->first;
            }
        }
        printf("%c",pos);
        pos++;

        for(i=pos;i<=122;i++)
        {
            if(maxx==txt[i])
            {
                printf("%c",txt.find(i)->first);
            }
        }
        printf("\n");
    }

return 0;

}
