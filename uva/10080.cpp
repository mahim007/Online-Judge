#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll>V[109];
ll vis[109],match[109];
ll n,m,s,v;
struct data{
    double x,y;
};
vector<data>p,q;

ll kuhn(ll u){
    for(ll i=0;i<V[u].size();i++){
        ll g=V[u][i];
        if(vis[g]) continue;
        vis[g]=1;
        if(match[g]==-1){
            match[g]=u;
            return 1;
        }
        else{
            if(kuhn(match[g])){
                match[g]=u;
                return 1;
            }
        }
    }

    return 0;
}

int main(){
    ll i,j,k;
    while(scanf("%lld %lld %lld %lld",&n,&m,&s,&v)==4){
        for(i=1;i<=n;i++){
            double s,t;
            scanf("%lf %lf",&s,&t);
            data D;
            D.x=s;
            D.y=t;
            p.push_back(D);
        }

        for(i=1;i<=m;i++){
            double s,t;
            scanf("%lf %lf",&s,&t);
            data D;
            D.x=s;
            D.y=t;
            q.push_back(D);
        }

        for(i=0;i<n;i++){
            for(j=0;j<m;j++){ //cout<<"distance:"<<sqrt(((p[i].x-q[j].x)*(p[i].x-q[j].x)+(p[i].y-q[j].y)*(p[i].y-q[j].y)))<<endl;
                double ln=sqrt(((p[i].x-q[j].x)*(p[i].x-q[j].x)+(p[i].y-q[j].y)*(p[i].y-q[j].y)))/v;
                if(ln<(double)s || (ln-(double)s)<1e-7){
                    V[i].push_back(j); //cout<<"data inserted...\n";
                }
            }
        } //cout<<"finished....\n";

        ll ans=0;
        for(i=0;i<m;i++) match[i]=-1;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++) vis[j]=0;
            if(kuhn(i)) ans++;
        }

        printf("%lld\n",n-ans);
        for(i=0;i<109;i++) V[i].clear();
        p.clear();q.clear();
    }

    return 0;
}
