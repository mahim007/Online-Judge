
#include<bits/stdc++.h>
using namespace std;
#define maax 100009
#define i64 long long int
i64 arr[maax];
i64 tree[maax*3];

void init(i64 node,i64 l,i64 r)
{
    if(l==r)
    {
        tree[node]=arr[l];
        return;
    }
    i64 Left=node*2;
    i64 Right=node*2+1;
    i64 mid=(l+r)/2;
    init(Left,l,mid);
    init(Right,mid+1,r);
    tree[node]=tree[Left]+tree[Right];
}

i64 query(i64 node,i64 l,i64 r,i64 i,i64 j)
{
    if(i>r || j<l) return 0;
    if(l>=i && r<=j) return tree[node];
    i64 Left=node*2;
    i64 Right=node*2+1;
    i64 mid=(l+r)/2;
    i64 p1=query(Left,l,mid,i,j);
    i64 p2=query(Right,mid+1,r,i,j);
    return p1+p2;
}

void update(i64 node,i64 l,i64 r,i64 i,i64 val)
{
    if(i>r || i<l) return;
    if(l>=i && r<=i)
    {
        tree[node]=val;
        return;
    }
    i64 Left=node*2;
    i64 Right=node*2+1;
    i64 mid=(l+r)/2;
    update(Left,l,mid,i,val);
    update(Right,mid+1,r,i,val);
    tree[node]=tree[Left]+tree[Right];
}

int main()
{
    i64 n,q,T,t;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%lld %lld",&n,&q);
        for(i64 i=1;i<=n;i++)
            scanf("%lld",&arr[i]);
        init(1,1,n);
        printf("Case %lld:\n",t);
        for(i64 i=1;i<=q;i++)
        {
            i64 p;
            scanf("%lld",&p);
            if(p==1)
            {
                i64 u;
                scanf("%lld",&u);
                printf("%lld\n",arr[u+1]);
                arr[u+1]=0;
                update(1,1,n,u+1,0);
            }
            else if(p==2)
            {
                i64 u,v;
                scanf("%lld %lld",&u,&v);
                arr[u+1]=arr[u+1]+v;
                update(1,1,n,u+1,arr[u+1]);
            }
            else
            {
                i64 u,v;
                scanf("%lld %lld",&u,&v);
                printf("%lld\n",query(1,1,n,u+1,v+1));
            }
        }
    }
    return 0;
}
