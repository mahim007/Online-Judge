#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maax 150009
ll tree[4*maax];
vector<ll>V;
ll cnt,q,total;

void update(ll node,ll l,ll r,ll pos,ll val)
{
    if(l==pos && pos==r)
    {
        tree[node]+=val; //cout<<"pos:"<<pos<<" tree["<<node<<"]:"<<tree[node]<<endl;
        return;
    }
    ll Left=node*2;
    ll Right=node*2+1;
    ll mid=(l+r)/2;
    if(pos<=mid)
        update(Left,l,mid,pos,val);
    else
        update(Right,mid+1,r,pos,val);
    tree[node]=tree[Left]+tree[Right]; //cout<<"tree["<<node<<"]:"<<tree[node]<<endl;
}

ll query(ll node,ll l,ll r,ll pos)
{
    tree[node]--;
    if(l==r)
    { //cout<<"returning l:"<<l<<endl;
        return l;
    }
    ll Left=node*2;
    ll Right=node*2+1;
    ll mid=(l+r)/2;
    if(pos<=tree[Left])
        return query(Left,l,mid,pos);
    else
        return query(Right,mid+1,r,pos-tree[Left]);
}

int main()
{
    ll T,t,i,tmp;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%lld %lld",&cnt,&q);
        total=cnt+q;
        tmp=cnt;
        for(i=1;i<=cnt;i++)
        {
            ll num;
            scanf("%lld",&num);
            V.push_back(num);
            update(1,1,total,i,1);
        }
        printf("Case %lld:\n",t);
        for(i=1;i<=q;i++)
        {
            char ch;
            ll x;
            getchar();
            scanf("%c",&ch);
            //cin>>ch;
            if(ch=='a')
            {
                cnt++;
                tmp++;
                scanf("%lld",&x);
                V.push_back(x);
                update(1,1,total,tmp,1);
            }
            else
            {
                scanf("%lld",&x);
                if(x>cnt)
                {
                    printf("none\n");
                    continue;
                }
                else
                {
                    cnt--;
                    ll v=query(1,1,total,x);
                    printf("%lld\n",V[v-1]);
                }
            }
        }
        memset(tree,0,sizeof tree);
        V.clear();
    }
    return 0;
}
