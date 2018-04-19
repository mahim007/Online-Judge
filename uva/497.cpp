#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define inf 10000000000
ll seq[40000],I[40000],L[40000],n;

void LIS(){
    ll mx=0;
    I[0]=-inf;
    for(ll i=1;i<=n;i++){
        I[i]=inf;
        L[i]=1;
    }

    for(ll i=1;i<=n;i++){
        ll low=0,high=n,mid;
        while(low<=high){
            mid=(high+low)/2;
            if(seq[i]<=I[mid])
                high=mid-1;
            else
                low=mid+1;
        }

        I[low]=seq[i];
        L[i]=low;
        if(mx<L[i]) mx=L[i];
    }

    printf("%lld\n",mx);
    vector<ll>V;
    for(ll i=n;i>=1;i--){
        if(L[i]==mx){
            V.push_back(seq[i]);
            mx--;
        }
    }

    ll sz=V.size();
    for(ll i=sz-1;i>=0;i--){
        printf("%lld\n",V[i]);
    }
}

int main(){
    ll T,t,i,d;
    char s[100];
    scanf("%lld",&T); //cout<<T<<endl;
    getchar();
    //gets(s);
    gets(s); //cout<<"t er pr:"<<s<<endl;
    for(t=1;t<=T;t++){
        i=0;
        while(gets(s)){
             //cout<<"s:"<<s<<endl;
            if(strlen(s)==0) break;
            sscanf(s,"%lld",&d);
            seq[++i]=d;
        }

        n=i;
        printf("Max hits: ");
        LIS();
        if(t!=T) printf("\n");
    }
    return 0;
}
