#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 1000009
char s[mxn],p[mxn];
ll before,after;
void cut_zero(char *ch,ll ln){
    for(ll i=0;i<ln;i++){
        if(ch[i]=='0') ch[i]='x';
        else break;
    }

    for(ll i=ln-1;i>=0;i--){
        if(ch[i]=='0') ch[i]='x';
        else break;
    }
}

ll find_point(char *ch,ll ln){
    for(ll i=0;i<ln;i++){
        if(ch[i]=='.'){
            before=i;
            after=ln-i-1;
            return i;
        }
    }

    before=ln;
    after=0;
    return -1;
}

void swapping(ll pos){
    for(ll i=pos;i>=2;i--){
        swap(p[i],p[i-1]);
    }
}

ll calc(ll pos,ll ln){
    for(ll i=pos+1;i<=ln;i++){
        if(p[i]>='1' && p[i]<='9') return i;
    }

    return 0;
}

int main(){
    ll ln,i,j,k,sign=1,ex=0;
    gets(s);
    ln=strlen(s);
    ll pos=find_point(s,ln); //cout<<"now pos:"<<pos<<"\n";
    if(pos==-1){
        s[ln]='.';
        ln++;
    }
    cut_zero(s,ln);
    k=0;
    for(i=0;i<ln;i++){
        if(s[i]!='x'){
            p[k]=s[i];
            k++;
        }
    } //cout<<p<<"\n";

    pos=find_point(p,k);

    if(before>1){
        sign=1;
        ex=before-1; //cout<<ex<<endl;
        swapping(pos);
        p[1]='.';
        cut_zero(p,k); //cout<<"here\n";
        after=calc(1,k);
        if(after)
        for(i=0;i<=k;i++){
            if(p[i]>='0' && p[i]<='9' || p[i]=='.'){
                printf("%c",p[i]);
            }
        }
        else printf("%c",p[0]);
        printf("E%lld\n",ex);
        printf("\n");
    }
    else if(before==1){ //cout<<"here\n";
        after=calc(0,k);
        if(after)
        for(i=0;i<k;i++){
            if(p[i]!='x'){
                printf("%c",p[i]);
            }
        }
        else printf("%c",p[0]);
        printf("\n");
    }
    else if(before==0 && after==0){
        printf("0\n");
    }
    else if(before<=0){ //cout<<p<<"\n";
        ll d=calc(pos,mxn); //cout<<"d:"<<d<<"\n";
        ex=-d;
        i=pos; //cout<<"pos of . "<<pos<<"\n";
        while(d--){
            swap(p[i],p[i+1]);
            i++;
        } //

        cut_zero(p,k);
        after=calc(i,mxn); //cout<<"after:"<<after<<"\n";
        //cout<<p<<"\n";
        if(after){ //cout<<"wtf!!!\n";
            for(i=0;i<k;i++){
                if(p[i]!='x'){
                    printf("%c",p[i]);
                }
            }
        }
        else printf("%c",p[i-1]);
        printf("E%lld\n",ex);
    }
}
