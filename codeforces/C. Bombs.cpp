#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009

struct data{
    ll x,y;

    bool operator < (const data& P) const{
        return abs(x)+abs(y)<abs(P.x)+abs(P.y);
    }
};
vector<data>V;

struct step{
    ll a,b;
    char ch;
};

vector<step>ans;

int main(){
    ll n,i,j,cnt=0;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        ll u,v;
        scanf("%lld %lld",&u,&v);
        data D;
        D.x=u;
        D.y=v;
        V.push_back(D);
    }

    ll bd,up;
    step P1,P2;
    P1.a=2;
    P2.a=3;
    sort(V.begin(),V.end());
    //cout<<"here\n";
    for(i=0;i<n;i++){
        bd=V[i].x; //cout<<bd<<endl;
        up=V[i].y; //cout<<up<<endl;
        step S;
        ll f=0;
        if(bd>0){
            S.a=1;
            S.b=(ll)abs(bd);
            S.ch='R';
            f=1;
        }
        else if(bd<0){
            S.a=1;
            S.b=(ll)abs(bd);
            S.ch='L';
            f=1;
        }

        if(f==1){
            ans.push_back(S);
        }

        f=0;
        if(up>0){
            S.a=1;
            S.b=(ll)abs(up);
            S.ch='U';
            f=1;
        }
        else if(up<0){
            S.a=1;
            S.b=(ll)abs(up);
            S.ch='D';
            f=1;
        }

        if(f==1){
            ans.push_back(S);
        }

        ans.push_back(P1);

        f=0;
        if(up>0){
            S.a=1;
            S.b=(ll)abs(up);
            S.ch='D';
            f=1;
        }
        else if(up<0){
            S.a=1;
            S.b=(ll)abs(up);
            S.ch='U';
            f=1;
        }

        if(f==1){
            ans.push_back(S);
        }

        f=0;
        if(bd>0){
            S.a=1;
            S.b=(ll)abs(bd);
            S.ch='L';
            f=1;
        }
        else if(bd<0){
            S.a=1;
            S.b=(ll)abs(bd);
            S.ch='R';
            f=1;
        }

        if(f==1){
            ans.push_back(S);
        }



        ans.push_back(P2);
    }

    printf("%lld\n",(ll)ans.size());
    ll sz=ans.size();
    for(i=0;i<sz;i++){
        if(ans[i].a==1) printf("%lld %lld %c\n",ans[i].a,ans[i].b,ans[i].ch);
        else printf("%lld\n",ans[i].a);
    }

    return 0;
}
