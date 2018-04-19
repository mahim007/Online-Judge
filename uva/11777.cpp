#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t1,t2,t3,a,ct[3],marks,T,t;

    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%d %d %d %d %d %d %d",&t1,&t2,&t3,&a,&ct[0],&ct[1],&ct[2]);
        vector<int>xm;
        xm.push_back(ct[0]);
        xm.push_back(ct[1]);
        xm.push_back(ct[2]);
        sort(xm.begin(),xm.end());

        marks=t1+t2+t3+a+((xm[2]+xm[1])/2);

        if(marks>=90)
            printf("Case %d: A\n",t);
        else if(marks>=80 && marks<90)
            printf("Case %d: B\n",t);
        else if(marks>=70 && marks<80)
            printf("Case %d: C\n",t);
        else if(marks>=60 && marks<70)
            printf("Case %d: D\n",t);
        else
            printf("Case %d: F\n",t);
    }
    return 0;
}
