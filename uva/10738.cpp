#include<bits/stdc++.h>
using namespace std;

#define i64 long long int
#define maxx 1000100

bool tag[maxx];
vector<i64>V;

struct data
{
    i64 mu;
    i64 M;
};
data D[maxx];

int calculate(i64 n)
{ //cout<<"n: "<<n<<endl;
    if(tag[n]==0)
    { //cout<<"prime"<<endl;
        return -1;
    }
    int p=0;
    int cnt=0;
    for(i64 i=0;V[i]*V[i]<=n;i++)
    {
        p=0;
        if(n%V[i]==0)
        {
            while(n%V[i]==0)
            {
                p++;
                cnt++;
                n=n/V[i];
                if(p>1)
                {
                    //cout<<"square"<<endl;
                    return 0;
                }
            }
        }
    }
    if(n!=1)
        cnt++;
    //cout<<"counter: "<<cnt<<endl;
    if(cnt&1)
        return -1;
    else
    return 1;
}

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
            V.push_back(i);
    }

    i64 k=0;
    for(i64 i=1;i<1000009;i++)
    {
        int c=calculate(i);
        D[i].mu=c;
        k=k+c;
        D[i].M=k; //cout<<D[i].mu<<" "<<D[i].M<<endl;
        //if(i%10==0)
        //system("pause");
    }

    i64 x;
    while(scanf("%lld",&x)==1)
    {
        if(x==0)
            break;

        printf("%8lld%8lld%8lld\n",x,D[x].mu,D[x].M);
    }
    return 0;
}
