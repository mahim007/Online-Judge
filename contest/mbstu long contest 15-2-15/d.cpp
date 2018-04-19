#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
struct data
{
    i64 x1,y1,lok;

    bool operator < (const data &p) const
    {
        if(x1!=p.x1)
            return x1<p.x1;
        else
            return y1<p.y1;
    }
};
vector<data>V;

int main()
{
    //freopen("inputfile.txt", "r", stdin);
freopen("outputfilename", "w", stdout);
    i64 T,t,d,n,x,y,p,res,total,pos1,pos2,i,j,fx,fy;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        V.clear();
        total=0;
        res=-1;
        scanf("%lld",&d);
        scanf("%lld",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%lld %lld %lld",&x,&y,&p);
            data D;
            D.x1=x;
            D.y1=y;
            D.lok=p;
            V.push_back(D);
        }
        sort(V.begin(),V.end());
       /* for(i=0;i<V.size();i++)
        {
            printf("%d %d\n",V[i].x1,V[i].y1);
        }   */
        for(i=0;i<V.size();i++)
        {
            int zx,zy,popu;
            zx=V[i].x1;
            zy=V[i].y1;
            popu=V[i].lok;
            total=0;
            for(j=i;j<V.size();j++)
            {
                int yx,yy;
                yx=V[j].x1;
                yy=V[j].y1;
                pos1=yx-d;
                pos2=yy-d;

                while(pos1<0)
                {
                    pos1++;
                }
                while(pos2<0)
                {
                    pos2++;
                }

                if((max (abs(yx - pos1), abs (yy - pos2)) <= d) && (max (abs(zx - pos1), abs (zy - pos2)) <= d) )
                {
                    //printf("from %d %d to %d %d aded\n",zx,zy,yx,yy);
                    total=total+V[j].lok;
                }

            if(total>res)
            {
                res=total;
                fx=pos1;
                fy=pos2;
            }
            }
        }
        printf("%lld %lld %lld\n",fx,fy,res);

    }
    return 0;
}
