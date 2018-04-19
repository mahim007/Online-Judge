#include<bits/stdc++.h>
using namespace std;
#define i64 long long int

int main()
{
    i64 i,j,k,stp,n,t,now,pre;
    char str[10];
    vector<string>naam[3];
    naam[0].push_back("Alice");
    naam[0].push_back("Ariel");
    naam[0].push_back("Aurora");
    naam[0].push_back("Phil");
    naam[0].push_back("Peter");
    naam[0].push_back("Olaf");
    naam[0].push_back("Phoebus");
    naam[0].push_back("Ralph");
    naam[0].push_back("Robin");
    naam[1].push_back("Bambi");
    naam[1].push_back("Belle");
    naam[1].push_back("Bolt");
    naam[1].push_back("Mulan");
    naam[1].push_back("Mowgli");
    naam[1].push_back("Mickey");
    naam[1].push_back("Silver");
    naam[1].push_back("Simba");
    naam[1].push_back("Stitch");
    naam[2].push_back("Dumbo");
    naam[2].push_back("Genie");
    naam[2].push_back("Jiminy");
    naam[2].push_back("Kuzko");
    naam[2].push_back("Kida");
    naam[2].push_back("Kenai");
    naam[2].push_back("Tarzan");
    naam[2].push_back("Tiana");
    naam[2].push_back("Winnie");


    scanf("%lld",&n);
    getchar();
    stp=0;
    pre=1;
    for(t=1;t<=n;t++)
    {
        gets(str);
        for(i=0;i<3;i++)
        {
            now=i+1;
            for(j=0;j<naam[i].size();j++)
            {
                if(naam[i][j]==str)
                {
                    stp=stp+abs(now-pre);
                    pre=now;
                    break;
                }
            }
        }

    }
    printf("%lld\n",stp);
    return 0;
}

