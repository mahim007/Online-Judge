#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[20],f[20];
ll d,n,mod;

struct Matrix{
    ll mat[20][20];
    Matrix operator * (const Matrix& m) const{
        Matrix tmp;
        for(ll i=1;i<=d;i++){
            for(ll j=1;j<=d;j++){
                tmp.mat[i][j]=0;
                for(ll k=1;k<=d;k++){
                    tmp.mat[i][j]+=mat[i][k]*m.mat[k][j]%mod;
                }
                tmp.mat[i][j]=tmp.mat[i][j]%mod;
            }
        }
        return tmp;
    }
};

void init(Matrix &m){
    memset(m.mat,0,sizeof (m.mat));
    for(ll i=1;i<=d;i++){
        m.mat[1][i]=a[i];
    }

    for(ll i=2;i<=d;i++){
        m.mat[i][i-1]=1;
    }
}

ll process(Matrix &m){
    if(n<=d) return f[n];
    n=n-d;

    Matrix ans;
    memset(ans.mat,0,sizeof (ans.mat));
    for(ll i=1;i<=d;i++){
        ans.mat[i][i]=1;
    }

    while(n){
        if(n&1){
            ans=ans*m;
        }
        n=n>>1;
        m=m*m;
    }
    ll sum=0;
    for(ll i=1;i<=d;i++){
        sum+=ans.mat[1][i]*f[d+1-i]%mod;
    }
    return sum%mod;
}

int main(){
    ll i,j,k;
    while(scanf("%lld %lld %lld",&d,&n,&mod)==3){
        if(d==0 && n==0 && mod==0) break;
        for(i=1;i<=d;i++){
            scanf("%lld",&a[i]);
            a[i]=a[i]%mod;
        }

        for(i=1;i<=d;i++){
            scanf("%lld",&f[i]);
            f[i]=f[i]%mod;
        }

        Matrix m;
        init(m);
        printf("%lld\n",process(m));
    }
    return 0;
}
