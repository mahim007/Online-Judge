#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[509][509];
ll r[509],c[509];
ll d1,d2;
ll n,zx,zy;
ll row,col;
map<ll,ll>R,C;

ll checkrow(){
    if(R.size()==1) return 0;
    else return 1;
}

ll checkdig(){
    for(ll i=1;i<=n;i++){
        d1+=a[i][i];
    }

    for(ll j=1;j<=n;j++){
        d2+=a[j][n-j+1];
    }

    if(d1==d2 && d1==row) return 0;
    return 1;
}

ll checkcol(){
    if(C.size()==1) return 0;
    return 1;
}

int main(){
    ios_base::sync_with_stdio(0);

    ll i,j,k,f=0;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cin>>a[i][j];
            if(a[i][j]==0){
                zx=i;
                zy=j;
            }
        }
    } //cout<<zx<<" "<<zy<<endl;

    if(n==1){
        cout<<"1"<<"\n";
        return 0;
    }
    for(i=1;i<=n;i++){
        row=0;
        if(i==zx) continue;
        for(j=1;j<=n;j++){
            row+=a[i][j];
        }

        R[row]=1;
    }

    for(i=1;i<=n;i++){
        col=0;
        if(i==zy) continue;
        for(j=1;j<=n;j++){
            col+=a[j][i];
        }

        C[col]=1;
    }



    if(checkrow()){
        cout<<"-1\n";
        return 0;
    }

    if(checkcol()){
        cout<<"-1\n";
        return 0;
    }

    ll er=0,ec=0;
    for(i=1;i<=n;i++){
        er+=a[zx][i];
        ec+=a[i][zy];
    }

    ll val;
    ll nx,ny;
    nx=zx;
    ny=zy;
    zx=zy=-1;
    row=R.begin()->first;
    col=C.begin()->first; //cout<<row<<" "<<col<<"\n";
    if((row-er)==(col-ec)){
        a[nx][ny]=col-ec;
        ll rr=0,cc=0;
        for(i=1;i<=n;i++){
            rr+=a[nx][i];
        }

        for(i=1;i<=n;i++){
            cc+=a[i][ny];
        }

        if(checkrow()){
        cout<<"-1\n";
        return 0;
    }
        if(checkcol()){
        cout<<"-1\n";
        return 0;
    }
        if(checkdig()){
            cout<<"-1\n";
            return 0;
        }

//        if(rr!=cc){
//            cout<<"-1\n";
//            return 0;
//        }

        if(a[nx][ny]>0){
            cout<<a[nx][ny]<<"\n";
            return 0;
        }
        else{
            cout<<"-1\n";
        return 0;
        }

    }
    else{
        cout<<"-1\n";
        return 0;
    }


    return 0;
}
