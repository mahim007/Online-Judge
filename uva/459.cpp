#include<bits/stdc++.h>
using namespace std;
int frnd[27];
int n;

int parentof(int r);
void Union(int a,int b);

void Union(int a,int b)
{
    int u=parentof(a);
    int v=parentof(b);
    if(u!=v)
    {
        frnd[u]=v;
        n--;
    }
}

int parentof(int r)
{
    if(frnd[r]==r)
        return r;
    else
    {
        return frnd[r]=parentof(frnd[r]);
    }
}
int main()
{
    int T,t;
    scanf("%d\n",&T);
    scanf("\n");

    for(t=1;t<=T;t++)
    {
        char ch;
        scanf("%c",&ch);
        getchar();
        n=ch-64;
        for(int i=1;i<=n;i++)
            frnd[i]=i;

        char str[2];
        while(gets(str))
        {
            if(strlen(str)==2)
            {
                int u,v;
                u=str[0]-64;
                v=str[1]-64;
                Union(u,v);
            }
            else
                break;
        }
        printf("%d\n",n);
        if(t!=T)
            printf("\n");
    }
}
