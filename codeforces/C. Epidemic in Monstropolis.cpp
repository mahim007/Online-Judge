#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define inf 1e10
#define mxn 509

struct data{
    ll indx;
    char cmd;
};

vector<data>V;
vector<ll>arr,chk;
ll n,k;

void fun(ll pos,ll rest){ //cout<<pos<<" "<<rest<<"\n";
    if(rest==k){
        ll f=1; //for(ll i=0;i<arr.size();i++) cout<<arr[i]<<" "; cout<<"\n";
        for(ll i=0;i<k;i++){
            if(arr[i+1]!=chk[i]){
                f=0;
                break;
            }
        }

        if(f==1){
            cout<<"YES\n";
            ll sz=V.size();
            for(ll i=0;i<sz;i++){
                cout<<V[i].indx<<" "<<V[i].cmd<<"\n";
            }

            exit(0);
        }

        return;
    }

    if(pos>=arr.size()-1 || pos<=0) return;

    if(arr[pos-1]<arr[pos]){
        ll p=arr[pos-1];
        arr[pos]+=p;
        arr.erase(arr.begin()+(pos-1));
        data D;
        D.indx=pos;
        D.cmd='L';
        V.push_back(D);
        fun(pos-1,rest-1);
        V.pop_back();
        arr.insert(arr.begin()+(pos-1),p);
        arr[pos]-=p;
    }

    if(arr[pos+1]<arr[pos]){
        ll p=arr[pos+1];
        arr[pos]+=p;
        arr.erase(arr.begin()+(pos+1));
        data D;
        D.indx=pos;
        D.cmd='R';
        V.push_back(D);
        fun(pos,rest-1);
        V.pop_back();
        arr.insert(arr.begin()+(pos+1),p);
        arr[pos]-=p;
    }

    fun(pos+1,rest);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll i,j;
    cin>>n;
    arr.push_back(inf);
    for(i=1;i<=n;i++){
        ll d;
        cin>>d;
        arr.push_back(d);
    }

    arr.push_back(inf);
    cin>>k;
    for(i=1;i<=k;i++){
        ll d;
        cin>>d;
        chk.push_back(d);
    } //cout<<"ekhane...\n";

    fun(1,n);
    cout<<"NO\n";

    return 0;
}
