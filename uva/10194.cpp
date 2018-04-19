#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sci(n) scanf("%d",&n)
#define scl(n) scanf("%lld",&n)
#define scd(n) scanf("%lf",&n)
#define sc scanf
#define pf printf
#define pfi(n) printf("%d",n)
#define pfl(n) printf("%lld",n)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define mem(a,n) memset(a,n,sizeof(a))
#define maax 39

struct node{
    ll point,win,tie,loss,match,dise,khaise;
    string name,lname;
    node(string _name){
        point=win=tie=loss=match=dise=khaise=0;
        name=_name;
        lname=_name ;//cout<<name<<endl;
        ll len=name.size(); //cout<<len<<endl;
        //name[len]='\0';
        for(ll i=0;lname[i];i++){
            lname[i]=tolower(lname[i]);
        }
    }
        bool operator < (const node& p) const{
            if(point!=p.point){
                return point>p.point;
            }
            if(win!=p.win){
                return win>p.win;
            }
            if(dise-khaise!=(p.dise-p.khaise)){
                return dise-khaise>(p.dise-p.khaise);
            }
            if(dise!=p.dise){
                return dise>p.dise;
            }
            if(match!=p.match){
                return match<p.match;
            }
            return lname<p.lname;
        }
};
//map<string,node>M;
vector<node>M;
int main()
{ //freopen("10194 output","w",stdout);
    ll T,t,n,i,j,k;
    char ch,s[1000];
    string _name;
    scanf("%lld",&T);
    getchar();
    for(t=1;t<=T;t++){
        gets(s);
        puts(s);
        scanf("%lld",&n);
        getchar();
        for(i=1;i<=n;i++){
            gets(s);
            _name=s;
            M.push_back(node(_name)); //cout<<"M[i-1]:"<<M[i-1].name<<endl;
            //M[_name]=node();
        }
        ll e;
        scanf("%lld",&e);
        getchar();
        for(i=1;i<=e;i++){
            char s[2][maax];
            ll score[2];
            ll flag=1;
            string p[2];
            while(ch=getchar()){
                if(ch=='\n') break;
                if(ch=='#'){
                    scanf("%lld@%lld",&score[0],&score[1]);
                    flag=0;
                    continue;
                }
                if(flag==1){
                    p[0]+=ch;
                }
                if(flag==0){
                    p[1]+=ch;
                }
            }
            //cout<<s[0]<<" "<<score[0]<<" "<<score[1]<<" "<<s[1]<<endl;

            //cout<<p[0]<<" "<<p[1]<<endl;
          //cout<<"size:"<<M.size()<<endl;
          for(j=0;j<M.size();j++){ //cout<<"M[j].name:"<<M[j].name<<endl;
            for(k=0;k<2;k++){ //cout<<"p[k]:"<<p[k]<<endl<<endl;
                if(M[j].name==p[k]){
                    if(score[k]>score[!k]){
                        M[j].point+=3; //cout<<M[j].name<<" "<<M[j].point<<endl;
                        M[j].win++; //cout<<M[j].name<<" "<<M[j].win<<endl;
                    }
                    else if(score[k]==score[!k]){
                        M[j].point++; //cout<<M[j].name<<" "<<M[j].point<<endl;
                        M[j].tie++; //cout<<M[j].name<<" "<<M[j].tie<<endl;
                    }
                    else{
                        M[j].point+=0; //cout<<M[j].name<<" "<<M[j].point<<endl;
                        M[j].loss++; //cout<<M[j].name<<" "<<M[j].loss<<endl;
                    }
                    M[j].match++; //cout<<M[j].name<<" "<<M[j].match<<endl;
                    M[j].dise+=score[k]; //cout<<M[j].name<<" "<<M[j].dise<<endl;
                    M[j].khaise+=score[!k]; //cout<<M[j].name<<" "<<M[j].khaise<<endl;
                }
            }
          }
        }
        sort(M.begin(),M.end());
        for(i=0;i<M.size();i++){ //cout<<M[i].name<<endl;
        printf("%lld) %s %lldp, %lldg (%lld-%lld-%lld), %lldgd (%lld-%lld)\n",i+1,M[i].name.c_str(),M[i].point,M[i].match,M[i].win,M[i].tie,M[i].loss,M[i].dise-M[i].khaise,M[i].dise,M[i].khaise);
        }
        M.clear();
        if(t!=T) printf("\n");
//        V.clear();
    }
    return 0;
}

