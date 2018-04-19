#include<bits/stdc++.h>
using namespace std;

#define i64 unsigned long long int
#define maxx 1000200
#define maxx2 1000090000000
bool tag[maxx];
vector<i64>V;
vector<i64>P;

int main()
{ //cout<<"generating prime..."<<endl;
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
            V.push_back(i);
    } //cout<<"seive finished... "<<V.size()<<" primes"<<endl;

    i64 n;
    i64 s=V.size();
    //cout<<"almost prime starts..."<<endl;
    //cout<<"maxx2: "<<maxx2<<endl;
    for(i64 i=0;i<s;i++)
    {
        n=V[i];//cout<<"n:"<<n<<endl;
        i64 p=n;
        while(1)
        {
            n=n*p;
            if(n<maxx2)
            {
                P.push_back(n);
            }
            else
                break;
        }
    }

    sort(P.begin(),P.end());
    //cout<<P.size()<<endl;

    i64 a,b,i,j,sum,ans,T,t,cnt;
    scanf("%llu",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%llu %llu",&a,&b);
        cnt=0;
        for(i=0;P[i]<=b;i++)
        {
            if(P[i]<a)
                continue;
            else if(P[i]>=a && P[i]<=b)
            {
                cnt++;
                //cout<<P[i]<<" ";
            }
            else if(P[i]>b)
                break;
        }
        printf("%llu\n",cnt);
    }
    return 0;
}
