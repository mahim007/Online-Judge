#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
#define maxx 1000
bool tag[maxx];
vector<i64>V;
map<i64,bool>M;
map<i64,bool>anagram;

void calculate()
{
    i64 i,j,k,flag,x;
    //printf("primes size:%d\n",V.size());
    for(i=0;i<V.size();i++)
    {
        flag=1;
        i64 n=V[i];
        char s[5];
        sprintf(s,"%d",n);
        //cout<<s<<endl;
        i64 len=strlen(s);
        for(j=1;j<=len*2-1;j++)
        {
            next_permutation(s,s+len);
            x=atoll(s);
            //printf("x=%lld\n",x);
            if(M[x]!=1)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            anagram[x]=1;
        }
    }
    //printf("anagrams:%d\n",anagram.size());
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
            {
                tag[j]=1;
            }
        }
    }
    i64 k=0;
    for(i64 i=2;i<maxx;i++)
    {
        if(tag[i]==0)
        {
            V.push_back(i);
            M[i]=1;
        }
    }
    calculate();

    i64 i,j,n,l,flag=0;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        if(n>999)
        {
            printf("0\n");
            continue;
        }

        for(k=1;k<=4;k++)
        {
            if(pow(10,k)>n)
            {
                l=pow(10,k);
                break;
            }
        }
        flag=0;
        for(i=n+1;i<=l;i++)
        {
            if(anagram[i]==1)
            {
                printf("%lld\n",i);
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("0\n");
    }
    return 0;
}
