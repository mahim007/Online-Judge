#include<bits/stdc++.h>
using namespace std;
#define ll long long int
struct spider{
    ll x,y;
    char dir;
};
vector<spider>V,M;
char a[2009][2009];
ll b[2009];
ll n,m,k;

void solve(){
    ll cnt=0,i,j;
        for(j=0;j<k;j++){
            if(V[j].dir=='L'){
                ll d=abs(V[j].x-1);
                if( V[j].y-d>=1 && V[j].y-d<=m){
                b[V[j].y-d]++;
            }
                //if(V[j].x==i && V[j].y==p) cnt++;
            }
            else if(V[j].dir=='R'){
               ll d=abs(V[j].x-1);
                if( V[j].y+d>=1 && V[j].y+d<=m){
                b[V[j].y+d]++;
                }
            }
            else if(V[j].dir=='U'){
                ll d=abs(V[j].x+1);
                if(d%2==0){
                b[V[j].y]++;
            }

        }

//        if(V[j].x<1 || V[j].x>n || V[j].y<1 || V[j].y>m){
//            V.erase(V.begin()+j);
        }

//    return cnt;
}


int main(){
    ll ans=0,i,j,q;
    //cin>>n>>m>>k;
    scanf("%lld %lld %lld",&n,&m,&k);
    getchar();
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            char c;
            //cin>>a[i][j];
            scanf("%c",&a[i][j]);
            c=a[i][j];
            //cin>>c;
            if(c=='L' || c=='R' || c=='U' || c=='D'){
                spider D;
                D.x=i;
                D.y=j;
                D.dir=c;
                V.push_back(D);
                //M.push_back(D);
            }
        } getchar();
    }

//    for(i=1;i<=n;i++){
//        for(j=1;j<=m;j++){
//            cout<<a[i][j];
//        } cout<<endl;
//    }

    solve();
    for(j=1;j<=m;j++){
        //ans=solve(j);
        printf("%lld ",b[j]);
    }

   printf("\n");
    return 0;
}
