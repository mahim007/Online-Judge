#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,t,n,x;

    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%d",&n);
        vector<int>speed;
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&x);
            speed.push_back(x);
        }
        sort(speed.begin(),speed.end());
        printf("Case %d: %d\n",t,speed[speed.size()-1]);
    }
    return 0;
}
