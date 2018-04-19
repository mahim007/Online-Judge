#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll>A;
vector<pair<ll,ll> >V;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,i,j,cnt=0,x,y,d,k;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>d;
        A.push_back(d);
    }

    for(i=0;i<n;i++){
        j=i;
        for(k=j;k<n;k++){
            if(A[j]>A[k]) j=k;
        }

        if(i!=j){
            cnt++;
            V.push_back(make_pair(i,j));
            swap(A[i],A[j]);
        }
    }

    cout<<cnt<<"\n";
    k=V.size();
    for(i=0;i<k;i++){
        cout<<V[i].first<<" "<<V[i].second<<"\n";
    }

    return 0;
}
