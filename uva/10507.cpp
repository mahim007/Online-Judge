#include<bits/stdc++.h>
using namespace std;

#define maax 26
int n,awake[maax],nextawake[maax];
int graph[maax][maax];

int calculate()
{
    int i,j,k,cnt=0;
    for(k=0;k<maax;k++)
    {
        if(count(awake,awake+maax,1)==n)
            return k;

        memset(nextawake,0,sizeof(nextawake));

        for(i=0;i<maax;i++)
        {
            cnt=0;
            for(j=0;j<maax;j++)
            {
                if(awake[j]==1 && graph[i][j]==1)
                {
                    cnt++;
                }
            }

            if(cnt>=3)
            {
                nextawake[i]=1;
            }
        }
        for(i=0;i<maax;i++)
        {
            if(nextawake[i]==1)
                awake[i]=1;
        }
    }
    return -1;
}

int main()
{
    int i,j,k,ans,m;
    char s[10];

    while(cin>>n>>m)
    {
        for(i=1;i<=3;i++)
        {
            char ch;
            cin>>ch;
            awake[ch-'A']=1;
        }

        for(i=0;i<m;i++)
        {
            char u,v;
            cin>>u>>v;
            graph[u-'A'][v-'A']=1;
            graph[v-'A'][u-'A']=1;
        }
        //getchar();
        ans=calculate();
        if(ans==-1)
            printf("THIS BRAIN NEVER WAKES UP\n");
        else
            printf("WAKE UP IN, %d, YEARS\n",ans);

        memset(awake,0,sizeof(awake));
        memset(nextawake,0,sizeof(nextawake));
        memset(graph,0,sizeof(graph));
    }
    return 0;
}
