#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string s[101];
ll area[101];
int main(){
    ll T,t,i,j,a,b,c,v,x,y,n;
    string p;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        ll sum=0;
        for(i=1;i<=n;i++){
            cin>>s[i];
            scanf("%lld %lld %lld",&a,&b,&c);
            area[i]=a*b*c;
            sum+=area[i];
        }

        ll avg=sum/n;
        x=y=0;
        for(i=1;i<=n;i++){
            if(area[i]>avg){
                x=i;
            }
            if(area[i]<avg){
                y=i;
            }
        }
        printf("Case %lld: ",t);
        if(x==0 || y==0){
            printf("no thief\n");
        }
        else{
            cout<<s[x]<<" took chocolate from "<<s[y]<<endl;
        }
    }
    return 0;
}
