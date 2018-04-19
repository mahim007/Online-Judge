#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[200009];

int main(){
    ll n,t,a,b,c,ab,ac,bc,i,j,k,abc=0,flag=0,sign,m;
    cin>>n;
    m=n;
    cin>>a>>b>>c;
    ab=a+b;
    ac=a+c;
    bc=b+c;
    abc=a+b+c;
    for(i=1;i<=n;i++){
        cin>>arr[i];
        if(arr[i]>abc) flag=1;
    }

    if(flag==1){
        cout<<-1<<endl;
    }
    else{
        t=0;
        while(n>0){
        sign=0;
        for(i=1;i<=m;i++){
            if(a>=arr[i] && arr[i]>0){
                arr[i]=-1;
                sign=1;
                n--; cout<<"a assigned. sign="<<sign<<" n="<<n<<endl;
                break;
            }
        }

        for(i=1;i<=m;i++){
            if(b>=arr[i] && arr[i]>0){
                arr[i]=-1;
                sign=sign*10+2;
                n--; cout<<"b assigned. sign="<<sign<<" n="<<n<<endl;
                break;
            }
        }

        for(i=1;i<=m;i++){
            if(c>=arr[i] && arr[i]>0){
                arr[i]=-1;
                sign=sign*10+3;
                n--; cout<<"c assigned. sign="<<sign<<" n="<<n<<endl;
                break;
            }
        }

        if(n>0 && sign!=123){
            if(sign==0){
                for(i=1;i<=m;i++){
                    if(abc>=arr[i] && arr[i]>0){
                        arr[i]=-1;
                        n--; cout<<"abc assigned. sign="<<sign<<" n="<<n<<endl;
                        break;
                    }
                }
            }
            else if(sign==1){
                for(i=1;i<=m;i++){
                    if(bc>=arr[i] && arr[i]>0){
                        arr[i]=-1;
                        n--; cout<<"bc assigned. sign="<<sign<<" n="<<n<<endl;
                        break;
                    }
                }
            }
            else if(sign==2){
                for(i=1;i<=m;i++){
                    if(ac>=arr[i] && arr[i]>0){
                        arr[i]=-1;
                        n--; cout<<"ac assigned. sign="<<sign<<" n="<<n<<endl;
                        break;
                    }
                }
            }
            else if(sign==3){
                for(i=1;i<=m;i++){
                    if(ab>=arr[i] && arr[i]>0){
                        arr[i]=-1;
                        n--; cout<<"ab assigned. sign="<<sign<<" n="<<n<<endl;
                        break;
                    }
                }
            }
        }

        for(j=1;j<=m;j++) cout<<arr[j]<<" ";
        cout<<endl;
        t++; system("pause");

        }

       cout<<t<<endl;
    }

    return 0;
}
