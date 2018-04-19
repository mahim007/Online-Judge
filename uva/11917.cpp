#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,t,i,n,date,D;
    char sub[21];

    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        map<string,int>mymap;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%s %d",sub,&date);
            mymap[sub]=date;
        }
        scanf("%d",&D);
        scanf("%s",sub);

        int flag=0;
        if(mymap.find(sub)==mymap.end())
            flag=0;
        else if(mymap[sub]<=D)
            flag=1;
        else if(mymap[sub]<=D+5)
            flag=2;

        if(flag==1)
            printf("Case %d: Yesss\n",t);
        else if(flag==2)
            printf("Case %d: Late\n",t);
        else
            printf("Case %d: Do your own homework!\n",t);
    }
    return 0;
}
