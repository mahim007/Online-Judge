#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009

ll arr[mxn];
vector<ll>V;
map<ll,ll>M;

int main(){
    ll n,i,j,k,d;
    scanf("%lld",&n);
    for(i=1;i<=n;i++) scanf("%lld",&arr[i]);
    sort(arr+1,arr+1+n);
    if(n==1){
        printf("-1\n");
        return 0;
    }

    if(n==2){
        d=arr[2]-arr[1];
        if(d==0){
            printf("1\n");
            printf("%lld\n",arr[1]);
        }
        else if(d!=0 && d%2==0){
            printf("%lld\n",3ll);
            printf("%lld %lld %lld\n",arr[1]-d,arr[2]-(d/2),arr[2]+d);
        }
        else{
            printf("2\n");
            printf("%lld %lld\n",arr[1]-d,arr[2]+d);
        }

        return 0;
    }

    //reverse(arr+1,arr+1+n);
    for(i=2;i<=n;i++){
        d=arr[i]-arr[i-1];
        if(M[d]==0) V.push_back(d);
        M[d]++;
    }

    sort(V.begin(),V.end());
    if(V.size()==1 && V[0]!=0){
        printf("2\n");
        printf("%lld %lld\n",min(arr[1]-V[0],arr[n]+V[0]),max(arr[1]-V[0],arr[n]+V[0]));
    }
    else if(V.size()==1 && V[0]==0){
        printf("1\n");
        printf("%lld\n",arr[1]);
    }
    else if(V.size()==2){
        if(M[V[0]]>=M[V[1]]) d=V[0];
        else d=V[1];

        if(M[V[0]]>1 && M[V[1]]>1){
            printf("0\n");
            return 0;
        }

        ll f=0;
        ll p;
        for(i=2;i<=n;i++){
        ll d1=arr[i]-arr[i-1];
        if(d==d1) continue;
        else{
            p=arr[i]-d;
            if(p-arr[i-1]==d){ //cout<<"now:"<<p<<" "<<arr[i-1]<<" "<<d<<"\n";
                f=1;
                break;
            }
        }
      }
      if(f==0){
        printf("0\n");
        return 0;
      }
      printf("1\n");
      printf("%lld\n",p);
    }
    else if(V.size()>2){
        printf("0\n");
    }

    return 0;
}
