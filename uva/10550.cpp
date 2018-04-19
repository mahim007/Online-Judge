#include<bits/stdc++.h>
using namespace std;
int main()
{
    int pos,n1,n2,n3,ans,pos1,pos2,pos3;
    while(scanf("%d %d %d %d",&pos,&n1,&n2,&n3)==4)
    {
        if(pos==0 && n1==0 && n2==0 && n3==0)
            break;
        if(pos<n1)
        {
            pos1=(pos+40-n1)*9;

        }
        else
            pos1=(pos-n1)*9;

        if(n2>n1)
        {
            pos2=(n2-n1)*9;

        }
        else
            pos2=(40-n1+n2)*9;

        if(n2>n3)
            pos3=(n2-n3)*9;
        else
            pos3=(n2+40-n3)*9;

        ans=720+pos1+360+pos2+pos3;
        printf("%d\n",ans);
    }
    return 0;
}
