#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<string,ll>M;
struct data{
    ll star;
    ll damage;
    bool operator < (const data& P) const{
        if(star!=P.star) return star<P.star;
        return damage<P.damage;
    }
};
vector<data>V[109];
int main(){
    ll T,t,i,j,k,n,anonto,enemy,m;
    cin>>T;
    for(t=1;t<=T;t++){
        cin>>n;
        k=0;
        for(i=1;i<=n;i++){
            string p;
            cin>>p;
            if(M[p]==0){
                k++;
                M[p]=k;
            }
        }
        for(i=1;i<=n;i++){
            string p;
            cin>>p;
            if(M[p]==0){
                k++;
                M[p]=k;
            }
        }

        cin>>m;
        for(i=1;i<=m;i++){
            string a,d;
            ll st,dm;
            cin>>a>>d>>st>>dm;
            data D;
            D.star=st;
            D.damage=dm;
            ll x=M[d];
            V[x].push_back(D);
        }

        for(i=1;i<=2*n;i++){
            sort(V[i].begin(),V[i].end());
        }

        anonto=enemy=0;
        ll adam=0,edam=0;
        for(i=1;i<=n;i++){
            if(V[i].size()>=1){
                enemy+=V[i][V[i].size()-1].star;
                edam+=V[i][V[i].size()-1].damage;
            }
        }
        for(i=n+1;i<=2*n;i++){
            if(V[i].size()>=1){
                anonto+=V[i][V[i].size()-1].star;
                adam+=V[i][V[i].size()-1].damage;
            }
        }

        printf("Case %lld:\n",t);
        double per=((1.0*adam)/(1.0*n));
        printf("Ananta's clan : %lldstar & %0.2lf%%damage\n",anonto,per);
        per=((1.0*edam)/(1.0*n));
        printf("Enemy clan : %lldstar & %0.2lf%%damage\n",enemy,per);
        if(anonto>enemy){
            printf("Ananta the great leader.\n");
        }
        else if(enemy>anonto){
            printf("Ananta the great looser.\n");
        }
        else if(anonto==enemy){
            if(adam>edam) printf("Ananta the great leader.\n");
            else if(edam>adam) printf("Ananta the great looser.\n");
            else printf("Clash of Clans.\n");
        }


        M.clear();
        for(i=1;i<=2*n;i++) V[i].clear();
    }
    return 0;
}
