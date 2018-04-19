#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
ll n;
struct Matrix{
    ll mat[5][5];
    Matrix operator * (const Matrix& m) const{
        Matrix tmp;
        for(ll i=0;i<5;i++){
            for(ll j=0;j<5;j++){
                tmp.mat[i][j]=0;
                for(ll k=0;k<5;k++){
                    tmp.mat[i][j]+=(mat[i][k]*m.mat[k][j])%mod;
                }
                tmp.mat[i][j]%=mod;
            }
        }
        return tmp;
    }
};

Matrix bigmod(Matrix& m){
    Matrix ans;
    memset(ans.mat,0,sizeof ans.mat);
    for(ll i=0;i<5;i++){
        ans.mat[i][i]=1;
    }
    while(n){
        if(n&1) ans=ans*m;
        n=n>>1;
        m=m*m;
    }
    return ans;
}

int main(){
    ll a,x,y,b,p,q;
    while(scanf("%lld",&n)==1){
        scanf("%lld %lld %lld %lld %lld %lld",&a,&x,&y,&b,&p,&q);
        Matrix m;
        memset(m.mat,0,sizeof m.mat);
        m.mat[0][0]=m.mat[0][1]=1;
        m.mat[1][1]=((x%mod)*(p%mod))%mod;
        m.mat[1][2]=((x%mod)*(q%mod))%mod;
        m.mat[1][3]=((p%mod)*(y%mod))%mod;
        m.mat[1][4]=((q%mod)*(y%mod))%mod;
        m.mat[2][2]=x%mod;
        m.mat[2][4]=y%mod;
        m.mat[3][3]=p%mod;
        m.mat[3][4]=q%mod;
        m.mat[4][4]=1;
        m=bigmod(m);
        ll ans=0;
        ans=(m.mat[0][1]*a%mod*b%mod+m.mat[0][2]*a%mod+m.mat[0][3]*b%mod+m.mat[0][4]%mod)%mod;
        printf("%lld\n",(ans+mod)%mod);
    }
    return 0;
}
