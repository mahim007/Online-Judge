#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[11],f[11];
ll n,mod,k;
struct Matrix{
    ll mat[11][11];
    Matrix operator * (const Matrix& m) const{
        Matrix tmp;
        for(ll i=1;i<=10;i++){
            for(ll j=1;j<=10;j++){
                tmp.mat[i][j]=0;
                for(ll k=1;k<=10;k++){
                    tmp.mat[i][j]+=mat[i][k]*m.mat[k][j]%mod;
                }
                tmp.mat[i][j]=tmp.mat[i][j]%mod;
            }
        }
        return tmp;
    }
};

void init(Matrix& m){
    memset(m.mat,0,sizeof m.mat);
    for(ll i=1;i<=10;i++){
        m.mat[1][i]=a[i];
    }

    for(ll i=2;i<=10;i++){
        m.mat[i][i-1]=1;
    }
}

ll process(Matrix& m){
    Matrix ans;
    memset(ans.mat,0,sizeof ans.mat);
    for(ll i=1;i<=10;i++){
        ans.mat[i][i]=1;
    }

    n=n-9;
    while(n){
        if(n&1) ans=ans*m;
        n=n>>1;
        m=m*m;
    }

    ll sum=0;
    for(ll i=1;i<=10;i++){
        sum+=ans.mat[1][i]*(10-i)%mod;
    }
    return sum%mod;
}

int main(){
    while(scanf("%lld %lld",&n,&mod)==2){
        for(ll i=1;i<=10;i++){
            scanf("%lld",&a[i]);
        }

        if(n<=9){
            printf("%lld\n",n);
            continue;
        }

        Matrix m;
        init(m);
        printf("%lld\n",process(m));
    }
    return 0;
}
