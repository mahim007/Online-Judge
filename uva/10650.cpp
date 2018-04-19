#include<bits/stdc++.h>
using namespace std;
#define maxx 32001
#define i64 long long int
bool tag[maxx];
vector<i64>V;
vector<i64>P;

int main()
{
    tag[0]=tag[1]=1;
    for(i64 i=4;i<maxx;i=i+2)
        tag[i]=1;
    for(i64 i=3;i*i<=maxx;i=i+2)
    {
        if(tag[i]==0)
        {
            for(i64 j=i*i;j<=maxx;j=j+i+i)
                tag[j]=1;
        }
    }

    for(i64 i=2;i<maxx;i++)
    {
        if(tag[i]==0)
            V.push_back(i);
    } //cout<<"size of V:"<<V.size()<<endl;

    i64 low,high,diff,i,j,k,n,cnt,predif,lst;
    //freopen("10650output","w",stdout);
    while(scanf("%lld %lld",&low,&high)==2)
    {
        if(low==0 && high==0)
            break;

        if(low>high)
            swap(low,high);
        k=0;
        while(V[k]<low)
        {
            k++;
        }
        if(k>0)
        k--;

        P.push_back(V[k]);
        lst=k;
        while(V[lst]<=high)
        {
            if(lst<V.size())
                lst++;
            else
                break;
        } //cout<<"lst:"<<lst<<" lst prime:"<<V.back()<<endl;
        cnt=1;
        diff=-1;
        predif=-1;
        j=0;

        for(i=k+1;i<=lst;i++)
        {
            P.push_back(V[i]);
            cnt++;
            if(cnt>1)
            diff=P[P.size()-1]-P[P.size()-2];

            if(predif==-1)
                predif=diff;
            else
            {
                if(predif!=diff)
                {
                    if(cnt>3)
                    {
                        //cout<<"1st"<<endl;
                        P.pop_back();
                        i64 num=P.back();
                        if((P[0]>=low) && (P.back()<=high)){
                        for(j=0;j<P.size();j++)
                        {
                            if(j==0)
                                printf("%lld",P[j]);
                            else
                                printf(" %lld",P[j]);
                        }
                        printf("\n");
                    }
                        P.clear();
                        P.push_back(num);
                        //P.push_back(V[i]);
                        --i;
                        cnt=1;
                        predif=diff=-1;
                    }
                    else
                    {
                        P.erase(P.begin(),P.begin()+1);
                        cnt--;
                        predif=diff;
                    }
                }
            }
        }
        P.clear();
    }
    return 0;
}
