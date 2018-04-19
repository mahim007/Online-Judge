#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n,hr,mnt,i,j,k,hr1,mnt1;
    scanf("%lld",&n);
    scanf("%lld:%lld",&hr1,&mnt1);

    hr=hr1;
    mnt=mnt1;
    if(n==12){
        if(hr>12 || hr<1){
            if(hr%10==0){
                hr=10;
            }
            else hr=hr%10;
        }

        if(mnt>59){
            mnt=mnt%10;
        }

        printf("%02lld:%02lld\n",hr,mnt);
    }
    else{
        if(hr>23){
            hr=hr%10;
        }

        if(mnt>59){
            mnt=mnt%10;
        }

        printf("%02lld:%02lld\n",hr,mnt);
    }

    return 0;
}
