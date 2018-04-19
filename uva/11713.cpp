#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,t,i,flag,len1,len2;
    char name1[25],name2[25];

    scanf("%d",&T);
    getchar();
    for(t=1;t<=T;t++)
    {
        flag=1;
        scanf("%s",name1);
        scanf("%s",name2);

        len1=strlen(name1);
        len2=strlen(name2);

        if(len1==len2)
        {
            for(i=0;i<len1;i++)
            {
                if(name1[i]!=name2[i])
                {
                    if(name1[i]=='a' || name1[i]=='e' || name1[i]=='i' || name1[i]=='o' || name1[i]=='u')
                    {
                        if(name2[i]=='a' || name2[i]=='e' || name2[i]=='i' || name2[i]=='o' || name2[i]=='u')
                        {
                            continue;
                        }
                        else
                        {
                            flag=0;
                            break;
                        }
                    }
                    else
                    {
                        flag=0;
                        break;
                    }
                }
            }
        }
        else
        {
            flag=0;
        }

        if(flag==1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
