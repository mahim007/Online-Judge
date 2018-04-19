#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,mod=10007;
ll f[3]={1,2,5};

struct Matrix{
    ll mat[4][4];
    Matrix operator * (const Matrix& m) const{
        Matrix tmp;
        for(ll i=1;i<=3;i++){
            for(ll j=1;j<=3;j++){
                tmp.mat[i][j]=0;
                for(ll k=1;k<=3;k++){
                    tmp.mat[i][j]+=(mat[i][k]*m.mat[k][j])%mod;
                }
                tmp.mat[i][j]%=mod;
            }
        }
        return tmp;
    }
};

void init(Matrix& m){
    memset(m.mat,0,sizeof m.mat);
    m.mat[1][1]=2;
    m.mat[1][2]=0;
    m.mat[1][3]=1;

    m.mat[2][1]=1;

    m.mat[3][2]=1;
}

ll process(Matrix& m){
    Matrix ans;
    memset(ans.mat,0,sizeof ans.mat);
    for(ll i=1;i<=3;i++) ans.mat[i][i]=1;
    n=n-3;
    while(n){
        if(n&1) ans=ans*m;
        n=n>>1;
        m=m*m;
    }

    ll sum=0;
    for(ll i=1;i<=3;i++){
        sum+=ans.mat[1][i]*f[3-i]%mod;
    }
    return sum%mod;
}

int main(){
    ll T,t;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        printf("Case %lld: ",t);
        if(n<=3){
            printf("%lld\n",f[n-1]);
            continue;
        }
        else{
            Matrix m;
            init(m);
            printf("%lld\n",process(m));
        }
    }
    return 0;
}









