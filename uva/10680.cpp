#include<bits/stdc++.h>
using namespace std;
#define maax 1000999
#define lmt 10000000000
#define ll long long int
bool tag[maax];
ll arr[maax];
vector<ll>V;
ll sz;

void generator(){
    tag[0]=tag[1]=1;
    for(ll i=4;i<maax;i=i+2){
        tag[i]=1;
    }
    for(ll i=3;i*i<maax;i=i+2){
        if(tag[i]==0){
            for(ll j=i*i;j<maax;j=j+i+i){
                tag[j]=1;
            }
        }
    }
    for(ll i=1;i<maax;i++){
        if(tag[i]==0){
            V.push_back(i);
        }
    }
    sz=V.size();
     //cout<<"lst:"<<V[sz-1]<<endl;
}

int main(){
    generator();
    ll i,j,k,n;
    while(scanf("%lld",&n)==1){
        if(n==0){
            break;
        }
        ll res=1;
        for(i=0;V[i]<=n;i++){
            for(j=V[i],k=0;j<=n;j=j*V[i],k++); //cout<<V[i]<<" ase "<<k<<" bar."<<endl;
            j=j/V[i];
            res=res*j; //cout<<"res:"<<res<<endl;
            //if(res<=0){
            //    system("pause");
            //    cout<<"!!!"<<res<<endl;
            //}
            ll d=0;
            while(res%10==0){
                res=res/10; //cout<<"div by 10\n";
                d++;
                //if(d>7){
                    //cout<<res<<endl;
                    //system("pause");
                //}
            }
            res=res%lmt; //cout<<"after mod:"<<res<<endl;
            //if(res<=0){
            //    system("pause");
            //    cout<<"???"<<res<<endl;
            //}
        }
        printf("%d\n",res%10);
    }
    return 0;
}
