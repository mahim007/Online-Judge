#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define eps 1e-9
char khamar[109][109];
int main(){
    ll T,t,i,j,k,r,p,w,o,n;
    ll rr,rp,rw,ro;
    ll total,sum;
    double x;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld %lld %lld",&rr,&rp,&rw,&ro);
        //cin>>rr>>rp>>rw>>ro;
        scanf("%lld",&n);
        getchar();
        //getchar();
        //cin>>n;
        for(i=1;i<=n;i++){
            gets(khamar[i]);
            //cin>>khamar[i];
            //if(i<n) getchar();
        }

        sum=rr+rp+rw+ro;
        total=n*n-sum;
        r=p=o=w=0;
        for(i=1;i<=n;i++){
            for(j=0;j<n;j++){
                if(khamar[i][j]=='r') r++;
                else if(khamar[i][j]=='p') p++;
                else if(khamar[i][j]=='w') w++;
                else if(khamar[i][j]=='o') o++;
            }
        }

        o=o-ro;
        p=p-rp;
        w=w-rw;
        r=r-rr;

        printf("Case %lld:\n",t);
        x=(double)r*100/(double)total; //cout<<setprecision(r,2)<<endl;
        printf("Rice: %.2lf%%\n",x+eps);
        x=(double)p*100/(double)total;
        printf("Peas: %.2lf%%\n",x+eps);
        x=(double)w*100/(double)total;
        printf("Wheat: %.2lf%%\n",x+eps);
        x=(double)o*100/(double)total;
        printf("Onion: %.2lf%%\n",x+eps);

        //if(t<T) printf("\n");
    }

    return 0;
}
