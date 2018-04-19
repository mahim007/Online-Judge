#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<pair<ll,ll>,ll>M;
int main(){
    ll q,i,j,k,x,y,n,d,u,v,w,z,flag=0;
    cin>>q;
    for(i=1;i<=q;i++){
        cin>>d;
        if(d==1){
            map<pair<ll,ll>,ll>update;
            cin>>u>>v>>w;
            if(v<u) swap(v,u);
            flag=0;
            while((v/2)>=1){
                z=v/2;
                if(update[make_pair(v,z)]==0){
                    M[make_pair(v,z)]+=w;
                    update[make_pair(v,z)]=1;
                }
                if(update[make_pair(z,v)]==0){
                    M[make_pair(z,v)]+=w;
                    update[make_pair(z,v)]=1;
                }
                if(z==u){
                    flag=1;
                    break;
                }
                v=z;
            }
            if(flag!=1){
                while((u/2)>=1){
                z=u/2;
                if(update[make_pair(u,z)]==0){
                    M[make_pair(u,z)]+=w;
                    update[make_pair(u,z)]=1;
                }
                else{
                    M[make_pair(u,z)]-=w;
                }
                if(update[make_pair(z,u)]==0){
                    M[make_pair(z,u)]+=w;
                    update[make_pair(z,u)]=1;
                }
                else{
                    M[make_pair(z,u)]-=w;
                }

                u=z;
            }
            }
        }
        else{
            cin>>u>>v;
            map<pair<ll,ll>,ll>update;
            ll ans=0;
            if(v<u) swap(v,u);
            flag=0;
            while((v/2)>=1){
                z=v/2;
                if(update[make_pair(v,z)]==0){
                    ans+=M[make_pair(v,z)];
                    update[make_pair(v,z)]=1;
                    update[make_pair(z,v)]=1;
                }
               if(z==u){
                    flag=1;
                    break;
                }
                v=z;
            }
            if(flag!=1){
                while((u/2)>=1){
                    z=u/2;
                    if(update[make_pair(u,z)]==0){
                        ans+=M[make_pair(u,z)];
                    }
                    else{
                        ans-=M[make_pair(u,z)];
                    }

                    u=z;
                }

            }

            cout<<ans<<endl;
        }
    }
}
