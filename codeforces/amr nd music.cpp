#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
struct instrument
{
    i64 pos,day;
    bool operator < (const instrument &p) const
    {
        return day<p.day;
    }
};

vector<instrument>V;

int main()
{
    i64 N,D;
    while(scanf("%lld %lld",&N,&D)==2)
    {
        vector<i64>position;
        i64 cntr=0,total=0;

        for(i64 i=1;i<=N;i++)
        {
            i64 d;
            scanf("%lld",&d);
            instrument ins;
            ins.day=d;
            ins.pos=i;
            V.push_back(ins);
        }
        total=0;

        sort(V.begin(),V.end());
        for(i64 i=0;i<N;i++)
        {
            if(total+V[i].day>D)
                break;
            cntr++;
            total=total+V[i].day;
            position.push_back(V[i].pos);
        }
        if(cntr==0)
            printf("%lld\n",cntr);

        else
        {
            printf("%lld\n",cntr);
            for(i64 i=0;i<position.size();i++)
        {
            if(i==position.size()-1)
            printf("%lld\n",position[i]);
            else
                printf("%lld ",position[i]);
        }
        }
        V.clear();
    }
    return 0;
}
