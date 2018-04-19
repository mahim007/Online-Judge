#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[200],ch;
    int i,j,n,t,total,len,num;

    while(scanf("%s",str)==1)
    {
        if(str[0]>='0' && str[0]<='9')
        {
            n=atoi(str);

            if(n>=1000)
            {
                int m=n/1000;
                for(i=1;i<=m;i++)
                    printf("M");
                n=n-m*1000;
            }

            if(n>=900)
            {
                printf("CM");
                n=n-900;
            }

            if(n>=500)
            {
                printf("D");
                n=n-500;
            }

            if(n>=400)
            {
                printf("CD");
                n=n-400;
            }

            if(n>=100)
            {
                int m;
                m=n/100;
                for(i=1;i<=m;i++)
                    printf("C");
                n=n-m*100;
            }

            if(n>=90)
            {
                printf("XC");
                n=n-90;
            }

            if(n>=50)
            {
                printf("L");
                n=n-50;
            }

            if(n>=40)
            {
                printf("XL");
                n=n-40;
            }

            if(n>=10)
            {
                int m=n/10;
                for(i=1;i<=m;i++)
                    printf("X");
                n=n-m*10;
            }

            if(n==9)
            {
                printf("IX");
                n=n-9;
            }

            if(n>=5)
            {
                printf("V");
                n=n-5;
            }

            if(n==4)
            {
                printf("IV");
                n=n-4;
            }

            if(n>=1)
            {
                int m=n/1;
                for(i=1;i<=m;i++)
                    printf("I");
                n=n-m*1;
            }
            printf("\n");
        }

        else
        {
            len=strlen(str);
            num=0;

            for(j=0;j<len;j++)
            {
                ch=str[j];
                if(ch=='C')
                {
                    char ch2=str[j+1];
                    if(ch2=='M')
                        {
                            num=num+900;
                            j=j+1;
                        }
                    else if(ch2=='D')
                        {
                            num=num+400;
                            j=j+1;
                        }
                    else
                        num=num+100;

                    continue;
                }

                if(ch=='X')
                {
                    char ch2=str[j+1];
                    if(ch2=='C')
                        {
                            num=num+90;
                            j=j+1;
                        }
                    else if(ch2=='L')
                        {
                            num=num+40;
                            j=j+1;
                        }
                    else
                        num=num+10;

                    continue;
                }

                if(ch=='I')
                {
                    char ch2=str[j+1];
                    if(ch2=='X')
                        {
                            num=num+9;
                            j=j+1;
                        }
                    else if(ch2=='V')
                        {
                            num=num+4;
                            j=j+1;
                        }
                    else
                        num=num+1;

                    continue;
                }

                if(ch=='M')
                {
                    num=num+1000;
                    continue;
                }

                if(ch=='D')
                {
                    num=num+500;
                    continue;
                }

                if(ch=='L')
                {
                    num=num+50;
                    continue;
                }

                if(ch=='V')
                {
                    num=num+5;
                    continue;
                }
            }

            printf("%d\n",num);
        }
    }
    return 0;
}
