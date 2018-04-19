#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sci(n) scanf("%d",&n)
#define scl(n) scanf("%lld",&n)
#define scd(n) scanf("%lf",&n)
#define sc scanf
#define pf printf
#define pfi(n) printf("%d",n)
#define pfl(n) printf("%lld",n)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define mem(a,n) memset(a,n,sizeof(a))
#define maax 100009
char str[maax];
ll tree[maax*4];
void init(ll node,ll l,ll r)
{
    if(l==r)
    {
        tree[node]=0; //cout<<"l:"<<l<<" tree["<<node<<"]:"<<tree[node]<<endl;
        return;
    }
    ll left=node*2;
    ll right=left+1;
    ll mid=(l+r)/2;
    init(left,l,mid);
    init(right,mid+1,r);
    tree[node]=0;
}

void update(ll node,ll l,ll r,ll i,ll j)
{ //cout<<"top"<<endl;
    if(i>r || j<l) return;
    //cout<<"second"<<endl;
    if(l>=i && r<=j)
    {
        tree[node]++; //cout<<"l:"<<l<<" tree["<<node<<"]:"<<tree[node]<<endl;
        return;
    }
    ll left=node*2;
    ll right=left+1;
    ll mid=(l+r)/2;
    update(left,l,mid,i,j);
    update(right,mid+1,r,i,j);
    //tree[node]++;
}

ll query(ll node,ll l,ll r,ll pos)
{ //cout<<"calling query...\n";
    if(l>pos || r<pos) {return 0;}
    if(l==pos && r==pos)
    {
        //cout<<"l:"<<l<<" tree["<<node<<"]:"<<tree[node]<<endl;
        return tree[node];
    }
    ll left=node*2;
    ll right=left+1;
    ll mid=(l+r)/2;
    if(pos<=mid)
    {//cout<<"l:"<<l<<" tree["<<node<<"]:"<<tree[node]<<endl;
        return tree[node]+query(left,l,mid,pos);
    }
    else
    {//cout<<"l:"<<l<<" tree["<<node<<"]:"<<tree[node]<<endl;
        return tree[node]+query(right,mid+1,r,pos);
    }
}

int main()
{
    ll T,len,q,i,j,t;
    scl(T);
    rep(t,T)
    {
        sc("%s",str);
        len=strlen(str);
        pf("Case %lld:\n",t);
        init(1,1,len); //rep(j,len*4) pf("%lld ",tree[j]); pf("\n");
        scl(q);
        rep(i,q)
        {
            getchar();
            char ch;
            sc("%c",&ch);
            if(ch=='I')
            { //cout<<"ch:"<<ch<<endl;
                ll u,v;
                scl(u);
                scl(v); //cout<<"calling update...\n";
                update(1,1,len,u,v);
            }
            else
            {
                ll pos;
                scl(pos);
                pfl((query(1,1,len,pos)+(str[pos-1]-'0'))%2);
                pf("\n");
            }
        }
        mem(tree,0);
    }
    return 0;
}
