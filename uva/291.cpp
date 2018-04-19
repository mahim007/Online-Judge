#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[6][6],cnt;
vector<ll>V;

void call(ll now){
    //V.push_back(now);
    if(V.size()==9){
        for(ll i=0;i<9;i++) printf("%lld",V[i]);
        printf("\n");//cnt++;
        return;
    }

    for(ll i=1;i<=5;i++){
        if(a[now][i]){
            a[now][i]=a[i][now]=0;
            V.push_back(i);
            call(i);
            V.pop_back();
            a[now][i]=a[i][now]=1;
        }
    }
}

int main(){
    a[1][2]=a[1][3]=a[1][5]=1;
    a[2][1]=a[2][3]=a[2][5]=1;
    a[3][1]=a[3][2]=a[3][4]=a[3][5]=1;
    a[4][3]=a[4][5]=1;
    a[5][1]=a[5][2]=a[5][3]=a[5][4]=1;
    V.push_back(1);
    call(1); //cout<<cnt<<endl;
    return 0;
}
