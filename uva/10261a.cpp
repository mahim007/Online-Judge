#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll data[250];
ll l,r;
ll side[250];
vector<ll>v1,v2;

int main(){ //freopen("10261output","w",stdout);
    ll t,T,i,j,d,lim;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&lim);
        lim*=100;
        i=1;
        while(1){
            scanf("%lld",&d);
            if(d==0) break;
            else data[i]=d;
            i++;
        }
        ll n=i-1; //cout<<"n="<<n<<endl;
        l=r=0;
        ll cnt=0;
        memset(side,-1,sizeof side);
        for(i=1;i<=n;i++){ //cout<<"now i="<<i<<" nd data[i]="<<data[i]<<endl;
            if(l+data[i]<=lim){
                cnt++; //cout<<"cnt 1"<<endl;
                l+=data[i];
                side[i]=1; //cout<<data[i]<<" "<<side[i]<<endl;
                v1.push_back(i);
            }
            else if(r+data[i]<=lim){
                cnt++; //cout<<"cnt 2"<<endl;
                r+=data[i];
                side[i]=0;  //cout<<data[i]<<" "<<side[i]<<endl;
                v2.push_back(i);
            }
            else if(lim-l+lim-r>=data[i]){
                ll n1,n2;
                n1=v1.size();
                n2=v2.size();
                n1--;
                n2--;
                ll done=0;
                for(ll p=n1;p>=0;p--){
                    for(ll q=n2;q>=0;q--){
                        if(l-data[v1[p]]+data[v2[q]]+data[i]<=lim && r+data[v1[p]]-data[v2[q]]<=lim){
                            l=l-data[v1[p]]+data[v2[q]]+data[i]; //cout<<"l:"<<l<<" data1="<<data[v1[p]]<<" data2="<<data[v2[q]]<<endl;
                            r=r+data[v1[p]]-data[v2[q]];
                            side[i]=1;
                            side[v1[p]]=!side[v1[p]];
                            side[v2[q]]=!side[v2[q]];
                            cnt++; //cout<<"cnt 3"<<endl;
                            done=1;
                            break;
                        }
                        else if(r+data[v1[p]]-data[v2[q]]+data[i]<=lim && l-data[v1[p]]+data[v2[q]]<=lim){
                            r=r+data[v1[p]]-data[v2[q]]+data[i]; //cout<<"r:"<<r<<" data1="<<data[v1[p]]<<" data2="<<data[v2[q]]<<endl;
                            l=l-data[v1[p]]+data[v2[q]];
                            side[i]=0;
                            side[v1[p]]=!side[v1[p]];
                            side[v2[q]]=!side[v2[q]];
                            cnt++; //cout<<"cnt 4"<<endl;
                            done=1;
                            break;
                        }
                    }
                    if(done==1) break;
                }
                if(done==0) break;

            }
            else{
                break;
            }
        }
        printf("%lld\n",cnt);
        for(i=1;i<=cnt;i++){
            if(side[i]==1){
                printf("port\n");
            }
            else if(side[i]==0){
                printf("starboard\n");
            }
        }
        v1.clear();
        v2.clear();
        if(t!=T)
            printf("\n");
    }
    return 0;
}
