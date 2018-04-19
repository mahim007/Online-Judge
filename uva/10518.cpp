#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
ll mod;
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

void init(Matrix &m){
    memset(m.mat,0,sizeof m.mat);
    m.mat[1][1]=1;
    m.mat[1][2]=1;
    m.mat[1][3]=1;
    m.mat[2][1]=1;
    m.mat[3][3]=1;
}

ll bigmod(ll n,Matrix &m){
    Matrix ans;
    memset(ans.mat,0,sizeof ans.mat);
    for(ll i=1;i<=3;i++) ans.mat[i][i]=1;
    n=n-1;
    while(n){
        if(n&1) ans=ans*m;
        n=n>>1;
        m=m*m;
    }

    ll res=0;
    for(ll i=1;i<=3;i++){
        res+=ans.mat[1][i];
    } //cout<<res<<endl;
    return res%mod;
}

int main(){
    ll n,t=1;
    while(scanf("%lld %lld",&n,&mod)==2){
        if(n==0 && mod==0) break;
        printf("Case %lld: %lld %lld ",t++,n,mod);
        if(mod==1){
            printf("0\n");
            continue;
        }
        else if(n==0 || n==1){
            printf("1\n");
            continue;
        }
        else{
            Matrix m;
            init(m);
            printf("%lld\n",bigmod(n,m));
        }
    }
    return 0;
}
