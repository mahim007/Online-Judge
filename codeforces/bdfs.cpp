#include<bits/stdc++.h>
using namespace std;

#define i64 long long int
#define maax 20009
i64 discovered[maax];
i64 ans=99999999;
i64 n,m;

void dfs(i64 n,i64 cnt)
{
    if(n>=m)
    {
        ans=min(ans,(n-m+cnt));
        return;
    }

    discovered[n]=cnt;

    if(discovered[n-1]>=cnt+1)
        dfs(n-1,cnt+1);
    if(discovered[2*n]>=cnt+1)
        dfs(2*n,cnt+1);
}

int main()
{
    i64 cnt=0;
    while(scanf("%lld %lld",&n,&m)==2){
    ans=99999999;
    memset(discovered,1,sizeof(discovered));
    dfs(n,cnt);
    printf("%lld\n",ans);
    }
}
