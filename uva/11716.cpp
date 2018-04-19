#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,t,n,i,j,k,len,root;
    char txt[10009];

    scanf("%d",&T);
    getchar();

    for(t=1;t<=T;t++)
    {
        gets(txt);
        len=strlen(txt);
        root=sqrt(len);

        if((root*root)==len)
        {
            char txt2d[101][101];
            k=0;

            for(i=0;i<root;i++)
            {
                for(j=0;j<root;j++)
                {
                    txt2d[i][j]=txt[k++];
                }
            }

            for(i=0;i<root;i++)
            {
                for(j=0;j<root;j++)
                {
                    printf("%c",txt2d[j][i]);
                }
            }
            printf("\n");

        }
        else
            printf("INVALID\n");
    }
    return 0;
}
