#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll arr[42];
    ll mid,l,r,i,j,T,t,n,q,sz;
    mid=20;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&n,&q);
        printf("Case %lld:\n",t);
        l=19;
        r=20;
        sz=0;
        for(i=1;i<=q;i++){
            string s;
            ll x;
            cin>>s;
            if(s=="pushLeft"){
                scanf("%lld",&x);
                if(sz>=n){
                    printf("The queue is full\n");
                    continue;
                }
                arr[l]=x;
                l--;
                printf("Pushed in left: %lld\n",x);
                sz++;
            }
            else if(s=="pushRight"){
                scanf("%lld",&x);
                if(sz>=n){
                    printf("The queue is full\n");
                    continue;
                }
                arr[r]=x;
                r++;
                printf("Pushed in right: %lld\n",x);
                sz++;
            }
            else if(s=="popLeft"){
                if(sz){
                    printf("Popped from left: %lld\n",arr[l+1]);
                    l++;
                    sz--;
                }
                else{
                    printf("The queue is empty\n");
                }
            }
            else if(s=="popRight"){
                if(sz){
                    printf("Popped from right: %lld\n",arr[r-1]);
                    r--;
                    sz--;
                }
                else{
                    printf("The queue is empty\n");
                }
            }
            //cout<<l<<" "<<r<<" "<<r-l<<endl;
        }
    }
    return 0;
}
