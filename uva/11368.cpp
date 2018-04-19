#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 20009
#define inf 99999999
ll I[mx];
ll n;
struct data{
    ll x,y;
    bool operator < (const data& P)const{
        if(P.x!=x) return x<P.x;
        return y>P.y;
    }
};
//data D[mx];
vector<data>V;
bool check(data& p,data& q){//cout<<"data checked"<<endl;
    return (p.x<q.x && p.y<q.y);
}

ll LIS(){ //cout<<"entered lis"<<endl;
    I[0]=0;
    for(ll i=1;i<=n;i++){
        I[i]=n+1;
    }

    for(ll i=1;i<=n;i++){
        ll low=1,high=n;
        ll mid;
        while(low<=high){
            mid=(low+high)/2; //cout<<"checking "<<I[mid]<<" and "<<i<<endl;
            if(check(V[I[mid]],V[i])){
                high=mid-1;
            }
            else low=mid+1;
        }

        I[low]=i; //cout<<i<<" took "<<low<<" place"<<endl;
    }
    ll cnt=0;
    for(ll i=1;i<=n;i++){//cout<<I[i]<<" ";
        if(I[i]>=1 && I[i]<=n) cnt++;
    } //cout<<endl;

    return cnt;
}

int main(){
    ll ans,i,j,k,t,T;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        data D;
        D.x=inf;
        D.y=inf;
        V.push_back(D);
        for(i=1;i<=n;i++){
            ll a,b;
            scanf("%lld %lld",&a,&b);
            D.x=a;
            D.y=b;
            V.push_back(D);
        }

        sort(V.begin()+1,V.end());
        D.x=-inf;
        D.y=-inf;
        V.push_back(D); //cout<<endl;
        //for(i=0;i<=n+1;i++) //cout<<V[i].x<<" "<<V[i].y<<endl;
        //cout<<endl;
        ans=LIS();
        printf("%lld\n",ans);
        V.clear();
    }
    return 0;
}
