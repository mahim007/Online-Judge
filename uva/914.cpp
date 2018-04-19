#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
#define maxx 1000009
bool tag[maxx];
vector<i64>V;
vector<i64>P;
map<i64,i64>M;

int main()
{
    tag[0]=tag[1]=1;
    for(i64 i=4;i<maxx;i=i+2)
        tag[i]=1;
    for(i64 i=3;i*i<maxx;i=i+2)
    {
        if(tag[i]==0)
        {
            for(i64 j=i*i;j<maxx;j=j+i+i)
                tag[j]=1;
        }
    }

    for(i64 i=2;i<maxx;i++)
    {
        if(tag[i]==0)
        {
            V.push_back(i);
        }
    }

    i64 T,t,i,j,k,diff,n,l,u,res;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        res=0;
        scanf("%lld %lld",&l,&u);
        if(l==u)
        {
            printf("No jumping champion\n");
            continue;
        }
        if(u<l)
            swap(u,l);

       /* for(k=0;V[k]<l;k++)
        {
            if(V[k]>=l)
                break;
        } //printf("k=%lld\n",k); */

        for(i=l;i<=u;i++)
        {
            if(tag[i]==0)
                P.push_back(i);
        } //printf("size:%lld\n",(i64)P.size());

        if(P.size()<=1)
        {
            printf("No jumping champion\n");
            continue;
        }

        i64 siz=P.size();
        for(i=0;i<siz-1;i++)
        {
            diff=P[i+1]-P[i];
            M[diff]=M[diff]+1;
            //printf("p[i+1]=%lld p[i]=%lld M[%lld]=%lld\n",P[i+1],P[i],diff,M[diff]);
        }

        i64 cnt=0;
        i64 flag=0;
        map<i64,i64>::iterator it;
        for(it=M.begin();it!=M.end();it++)
        {
            if((it->second)>cnt)
            {
                res=it->first;
                cnt=it->second;
                flag=1;
            }
            else if(it->second==cnt)
            {
                flag=0;
            }
        } //printf("cnt=%lld res=%lld\n",cnt,res);


        /*for(it=M.begin();it!=M.end();it++)
        {
            if((it->second)==cnt)
            {
                flag++;
            }
        } */
        if(flag==1)
            printf("The jumping champion is %lld\n",res);
        else
            printf("No jumping champion\n");


        P.clear();
        M.clear();
    }
    return 0;
}
