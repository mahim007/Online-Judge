#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 1009
ll arr[mxn];
char a[2009][1009];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,i,j,k,up,dwn,spc=0,d;
    up=dwn=1001;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>d;
        spc+=d;
        arr[i]=d;
    }

    j=1001,k=1;
    for(i=1;i<=n;i++){
        if(i&1){
            for(ll x=1;x<=arr[i];x++){
                if(x==1){
                    a[j][k]='/';
                }
                else{
                    j--;
                    k++;
                    a[j][k]='/';
                }
                if(j<up) up=j;
            }
            k++;
        }
        else{
            for(ll x=1;x<=arr[i];x++){
                if(x==1){
                    a[j][k]='\\';
                }
                else{
                    j++;
                    k++;
                    a[j][k]='\\';
                }
                if(j>dwn) dwn=j;
            }
            k++;
        }
    }

    for(i=up;i<=dwn;i++){
        for(j=1;j<=spc;j++){
            if(a[i][j]=='/') cout<<'/';
            else if(a[i][j]=='\\') cout<<'\\';
            else cout<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
