#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,p,mod;

struct Matrix{
    ll mat[3][3];
    Matrix operator * (const Matrix& m) const{
        Matrix tmp;
        for(ll i=1;i<=2;i++){
            for(ll j=1;j<=2;j++){
                tmp.mat[i][j]=0;
                for(ll k=1;k<=2;k++){
                    tmp.mat[i][j]+=mat[i][k]*m.mat[k][j]%mod;
                }
                tmp.mat[i][j]=tmp.mat[i][j]%mod;
            }
        }
        return tmp;
    }
};

ll bmod(ll n){
    ll ans=1;
    ll b=2;
    while(n){
        if(n&1) ans=ans*b;
        n=n>>1;
        b=b*b;
    }
    return ans;
}

void init(Matrix& m){
    memset(m.mat,0,sizeof m.mat);
    m.mat[1][1]=1;
    m.mat[1][2]=1;
    m.mat[2][1]=1;
    m.mat[2][2]=0;
}

ll process(Matrix& m){
    n=n-2;
    Matrix ans;
    memset(ans.mat,0,sizeof ans.mat);
    for(ll i=1;i<=2;i++) ans.mat[i][i]=1;
    while(n){
        if(n&1) ans=ans*m;
        n=n>>1;
        m=m*m;
    }
    ll sum=0;
    for(ll i=1;i<=2;i++){
        sum+=ans.mat[1][i]*1%mod;
    }
    return sum%mod;
}

int main(){
    while(scanf("%lld %lld",&n,&p)==2){
        mod=bmod(p);
        if(n==0) {printf("0\n"); continue;}
        if(n==1 || n==2) {printf("%lld\n",(ll)1%mod); continue;}

        Matrix m;
        init(m);
        printf("%lld\n",process(m));
    }
    return 0;
}
