#include<bits/stdc++.h>
using namespace std;
#define ll long long int
char arr[300009];
int main(){
    ll i,ln,m,k,q,pos,n,f,ps;
    char ch;
    scanf("%lld %lld",&n,&q);
    getchar();
    gets(arr);
    f=1;
    for(k=1;k<=q;k++){

        scanf("%lld %c",&pos,&ch);
        arr[pos-1]=ch;
        ll cnt=0;
        i=f;
        for(;i<n;i++){
            if(arr[i]==arr[i-1] && arr[i]=='.'){
                cnt++;
                if(f<i){
                    f=i;
                }
            }
        }
        printf("%lld\n",cnt);
    }
    return 0;
}
