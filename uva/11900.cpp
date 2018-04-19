#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,t,n,p,q,cntr,sum,i;

    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%d %d %d",&n,&p,&q);
        cntr=0;
        sum=0;
        int dim;
        vector<int>data;

        for(i=0;i<n;i++)
            {
                scanf("%d",&dim);
                data.push_back(dim);
            }
        sort(data.begin(),data.end());

        i=0;
        while(i<n)
        {
            if(cntr+1<=p && sum+data[i]<=q)
                {
                    cntr=cntr+1;
                    sum=sum+data[i];
                    i++;
                }
            else
                break;
        }

        printf("Case %d: %d\n",t,cntr);
    }
    return 0;
}
