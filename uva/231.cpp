#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define inf 100000
ll L[40000],I[40000],seq[40000],n;

ll LIS(){ cout<<"n:"<<n<<endl;
    ll mx=-inf;
    I[0]=-inf;
    for(ll i=1;i<=n;i++){
        I[i]=inf;
        L[i]=1;
    }

    for(ll i=1;i<=n;i++){
        ll low=0;
        ll high=n;
        ll mid;
        while(low<=high){
            mid=(low+high)/2;
            if(seq[i]<I[mid])
                high=mid-1;
            else
                low=mid+1;
        }

        I[low]=seq[i];
        L[i]=low;
        if(L[i]>mx) mx=L[i];

    }
    for(ll i=n;i>=1;i--) cout<<L[i]<<" ";
    cout<<endl;
    return mx;
}

int main(){
    ll d,i,j,t;
    t=1;
    while(scanf("%lld",&d)==1){
        if(d==-1) break;
        i=1;
        seq[i]=d;
        while(scanf("%lld",&d) && d!=-1){
            seq[++i]=d;
        }

        n=i; //cout<<"n:"<<n<<endl;
        for(i=1;i<=n/2;i++){
            //swap(seq[i],seq[n+1-i]);
            ll tmp=seq[i]; //cout<<"tmp:"<<tmp<<endl;
            seq[i]=seq[n+1-i]; //cout<<"seq[i]:"<<seq[i]<<endl;
            seq[n+1-i]=tmp; //cout<<"seq[n+1-i]:"<<seq[n+1-i]<<endl;
        }
        //for(i=1;i<=n;i++) cout<<seq[i]<<endl;

        if(t!=1) printf("\n");
        printf("Test #%lld:\n",t);
        printf("  maximum possible interceptions: %lld\n",LIS());
        t++;
    }
    return 0;
}
