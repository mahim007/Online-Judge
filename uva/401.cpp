#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,pal,mir,len;
    char str[30],mirror[30];

    while(scanf("%s",str)==1)
    {
        mir=pal=1;
        len=strlen(str);

        for(i=0,j=len-1;i<len/2;i++,j--)
        {
            if(str[i]!=str[j])
            {
                pal=0;
                break;
            }
        }

        for(i=0;i<len;i++)
        {
            if(str[i]=='Z')
                mirror[i]='5';
            else if(str[i]=='5')
                mirror[i]='Z';
            else if(str[i]=='2')
                mirror[i]='S';
            else if(str[i]=='S')
                mirror[i]='2';
            else if(str[i]=='E')
                mirror[i]='3';
            else if(str[i]=='3')
                mirror[i]='E';
            else if(str[i]=='J')
                mirror[i]='L';
            else if(str[i]=='L')
                mirror[i]='J';
            else if(str[i]=='A')
                mirror[i]='A';
            else if(str[i]=='M')
                mirror[i]='M';
            else if(str[i]=='Y')
                mirror[i]='Y';
            else if(str[i]=='O')
                mirror[i]='O';
            else if(str[i]=='I')
                mirror[i]='I';
            else if(str[i]=='H')
                mirror[i]='H';
            else if(str[i]=='T')
                mirror[i]='T';
            else if(str[i]=='1')
                mirror[i]='1';
            else if(str[i]=='U')
                mirror[i]='U';
            else if(str[i]=='V')
                mirror[i]='V';
            else if(str[i]=='8')
                mirror[i]='8';
            else if(str[i]=='W')
                mirror[i]='W';
            else if(str[i]=='X')
                mirror[i]='X';
            else
                mirror[i]='0';
        }

        for(i=0,j=len-1;i<len;i++,j--)
        {
            if(str[i]!=mirror[j])
            {
                mir=0;
                break;
            }
        }

        if(pal==0 && mir==0)
            printf("%s -- is not a palindrome.\n\n",str);
        else if(pal==1 && mir==0)
            printf("%s -- is a regular palindrome.\n\n",str);
        else if(pal==0 && mir==1)
            printf("%s -- is a mirrored string.\n\n",str);
        else if(pal==1 && mir==1)
            printf("%s -- is a mirrored palindrome.\n\n",str);

    }
    return 0;
}
