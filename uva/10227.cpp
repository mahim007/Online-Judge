#include<bits/stdc++.h>
using namespace std;

set<int>s1,s2;
vector<int>V[100];

int main()
{ //freopen("10227 output","w",stdout);
    int i,k,j,T,t,tree,people;
    char line[100];
    scanf("%d",&T);
    getchar();
    getchar();
    for(t=1;t<=T;t++)
    {
        scanf("%d %d",&people,&tree);
        getchar();

        int lok,gach;
        while(gets(line) && sscanf(line,"%d %d",&lok,&gach)==2)
        {
            V[lok].push_back(gach);
        }

        for(i=1;i<=people;i++)
        {
            sort(V[i].begin(),V[i].end());
        }

        int way=0;
        for(i=1;i<=people;i++)
        {
            if(V[i].size()==0)
            {
                way++; //cout<<"empty people founded at:"<<i<<endl;
                break;
            }
        }

        s1.clear();
        s2.clear();
        for(i=1;i<=people;i++)
        {
            //cout<<"set1 i:"<<i<<" contains:";
            if(V[i].size()!=0)
            {
                for(k=0;k<V[i].size();k++)
                {
                    s1.insert(V[i][k]);
                    //cout<<V[i][k]<<" ";
                }
                //cout<<"\n";
            }
            else
                continue;

            way++; //cout<<"way:"<<way<<endl;

            for(j=i+1;j<=people;j++)
            {
                //cout<<"set2 j:"<<j<<" contains:";
                if(V[j].size()!=0)
                {
                    for(k=0;k<V[j].size();k++)
                    {
                        s2.insert(V[j][k]);
                        //cout<<V[j][k]<<" ";
                    }
                    //cout<<"\n";
                }
                else
                    continue;

                if(s1==s2)
                {
                    //cout<<"set1 i:"<<i<<" ans set2 j:"<<j<<" are same\n\n";
                    V[j].clear();
                    s2.clear();
                    continue;
                }
                else
                {
                    //cout<<"set1 i:"<<i<<" ans set2 j:"<<j<<" are not same\n\n";
                    s2.clear();
                }
            }
            s1.clear();
        }
        if(t!=1)
            printf("\n");
        printf("%d\n",way);


        for(i=0;i<100;i++)
            V[i].clear();
    }
    return 0;
}
