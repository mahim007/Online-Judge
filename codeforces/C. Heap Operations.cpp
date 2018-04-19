#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<ll,ll>M;
string s[100009],p[1000009];
ll a[100009],b[1000009];

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    ll n,ans=0,i,j,k;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>s[i];
        if(s[i]!="removeMin") cin>>a[i]; //cout<<s[i]<<" "<<a[i]<<endl;
    }

    ans=1;
    for(i=1;i<=n;i++){
        if(s[i]=="insert"){
            M[a[i]]++;
            p[ans]=s[i];
            b[ans]=a[i];
            ans++;
        }
        else if(s[i]=="removeMin"){
            map<ll,ll>::iterator it;
            it=M.begin();
            if(M.size()==0){
                p[ans]="insert";
                b[ans]=0;
                ans++;
                p[ans]="removeMin";
                ans++;
            }
            else{
            while(it->second){ //cout<<it->first<<" "<<it->second<<endl;
                p[ans]=s[i];
                ans++;
                it->second--;
            }
            M.erase(it->first);
            }
        }
        else{
            ll flag=0;
            if(M[a[i]]<=0){
                M[a[i]]++;
                flag=1;
            }

            map<ll,ll>::iterator it;
            it=M.begin();
            while((it->first)<a[i]){ //cout<<"test:"<<it->first<<" and: "<<a[i]<<endl;
                while(it->second>0){
                    p[ans]="removeMin";
                    ans++;
                    it->second--;
                }
                M.erase(it->first);
                it=M.begin();
                if(M.begin()==M.end()) break;
            }

            if(flag){
                p[ans]="insert";
                b[ans]=a[i];
                ans++;
            }
            p[ans]="getMin";
            b[ans]=a[i];
            ans++;
        }
    }

    cout<<ans-1<<"\n";
    for(i=1;i<ans;i++){
        if(p[i]=="removeMin") cout<<"removeMin\n";
        else cout<<p[i]<<" "<<b[i]<<"\n";
    }
    return 0;
}
