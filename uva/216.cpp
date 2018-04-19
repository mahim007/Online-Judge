#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[10],n;
struct data{
    ll x,y;
};
data D[10];
vector<data>V,P;
double ans;

void call(ll p){ //cout<<"now at "<<p<<"\n";
    if(V.size()==n){
        double q=0.0;
        for(ll j=1;j<V.size();j++){ //cout<<"**********\n";
            double dis=sqrt((V[j].x-V[j-1].x)*(V[j].x-V[j-1].x)+(V[j].y-V[j-1].y)*(V[j].y-V[j-1].y))+16;
            q+=dis; //cout<<V[j].x<<" "<<V[j].y<<endl;cout<<V[j-1].x<<" "<<V[j-1].y; cout<<" dis:"<<dis<<"\n";
        } //cout<<" q:"<<q<<"\n";
        if(q<ans){
            ans=q;
            P.clear();
            P=V;
        }
        return;
    }

    for(ll i=1;i<=n;i++){
        if(a[i]==0){
            a[i]=1;
            V.push_back(D[i]);
            call(i);
            V.pop_back();
            a[i]=0;
        }
    }
}

int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);

    ll i,j,k,t=1;
    while(scanf("%lld",&n)==1){
        if(n==0) break;
        for(i=1;i<=n;i++){
            a[i]=0;
            //cin>>D[i].x>>D[i].y;
            scanf("%lld %lld",&D[i].x,&D[i].y);
        }

        ans=9999999999.0;
        V.clear();
        memset(a,0,sizeof a);
        call(1);

        printf("**********************************************************\n");
        printf("Network #%lld\n",t);
        for(j=1;j<n;j++){
            printf("Cable requirement to connect (%lld,%lld) to (%lld,%lld) is %0.2lf feet.\n",P[j-1].x,P[j-1].y,P[j].x,P[j].y,sqrt((P[j].x-P[j-1].x)*(P[j].x-P[j-1].x)+(P[j].y-P[j-1].y)*(P[j].y-P[j-1].y))+16);
        }
        printf("Number of feet of cable required is %0.2lf.\n",ans);
        t++;
    }
    return 0;
}
