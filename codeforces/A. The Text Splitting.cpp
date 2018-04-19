#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,p,q,i,j,k,d;
    string s,z;
    s=s+'0';
    cin>>n>>p>>q>>z;
    s=s+z;
    if(n%p==0){ //cout<<"1"<<endl;
        d=n/p;
        printf("%lld\n",d);
        for(i=1;i<=n;i++){
            printf("%c",s[i]);
            if(i%p==0)
                printf("\n");
        }
        //printf("\n");
        return 0;
    }

        if(n%q==0){ //cout<<"2"<<endl;
        d=n/q;
        printf("%lld\n",d);
        for(i=1;i<=n;i++){
            printf("%c",s[i]);
            if(i%q==0)
                printf("\n");
        }
        //printf("\n");
        return 0;
    }

    ll x=-1,y=-1;
    ll found=0;
    for(i=1;i<=60;i++){
        x=p*i;
        y=n-x;
        if(y>=1 && y%q==0){
            y=y/q;
            x=i;
            found=1;
            break;
        }
    }

    if(found==0)
        printf("-1\n");
    else{ //cout<<"3"<<endl;
        printf("%lld\n",x+y);
        for(i=1;i<=p*x;i++){
            printf("%c",s[i]);
            if(i%p==0)
                printf("\n");
        }
       // printf("\n");
        i--;
        for(j=1;j+i<=n;j++){
            printf("%c",s[j+i]);
            if(j%q==0)
                printf("\n");
        }
        //printf("\n");
    }
    return 0;
}
