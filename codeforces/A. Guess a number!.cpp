#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 2000000000

string p1,p2;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n,i,j,d,l,h,ans,f=0;
    l=-mxn;
    h=mxn;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>p1>>d>>p2;
        if(p1==">="){
            if(p2=="Y"){
                l=max(l,d);
                //l=d;
            }
            else{
                //h=d-1;
                h=min(h,d-1);
            }
        }
        else if(p1==">"){
            if(p2=="Y"){
                //l=d+1;
                l=max(l,d+1);
            }
            else{
                h=min(h,d);
            }
        }
        else if(p1=="<="){
            if(p2=="Y"){
                h=min(h,d);
            }
            else{
                l=max(l,d+1);
            }
        }
        else{
            if(p2=="Y"){
                h=min(h,d-1);
            }
            else{
               l=max(l,d);
            }
        }

        if(l>h) f=1;
        //cout<<"l:"<<l<<" r:"<<h<<"\n";
    }

    if(f==1){
        cout<<"Impossible\n";
    }
    else{
        ans=(l+h)/2;
        cout<<ans<<"\n";
    }

    return 0;
}
