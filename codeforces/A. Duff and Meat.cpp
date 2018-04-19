 #include<bits/stdc++.h>
 using namespace std;
 #define ll long long int
 #define mx 100009
 ll w[mx];
 ll p[mx];
int main(){
    ll n,i,j,ans;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld %lld",&w[i],&p[i]);
    }

    ans=0;
    j=1;
    ans=w[1]*p[1];
    for(i=2;i<=n;i++){
        if(p[j]<p[i]){
            ans=ans+p[j]*w[i];
        }
        else{
            ans+=p[i]*w[i];
            j=i;
        }
    }
    printf("%lld\n",ans);
    return 0;
}
