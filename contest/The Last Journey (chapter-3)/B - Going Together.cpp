///Bismillahir Rahmanir Rahim

#include<cstdio>
#include<iomanip>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<algorithm>
#include<string>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<sstream>
#include<stack>
#include<list>
#include<iostream>
#include<assert.h>
#include<bits/stdc++.h>

/**Define file I/O **/
#define f_input freopen("input.txt","r",stdin)
#define f_output freopen("output.txt","w",stdout)

/**Define memory set function**/
#define mem(x,y) memset(x,y,sizeof(x))
#define CLEAR(x) memset(x,0,sizeof(x))

/**Define function and object**/
#define pb push_back
#define Sort(v) sort(v.begin(),v.end())
#define RSort(v) sort(v.rbegin(),v.rend())
#define CSort(v,C) sort(v.begin(),v.end(),C)
#define all(v) (v).begin(),(v).end()
#define sqr(x) ((x)*(x))
#define find_dist(a,b) sqrt(sqr(a.x-b.x)+sqr(a.y-b.y))

/**Define constant value**/
#define ERR 1e-9
#define pi (2*acos(0))
#define PI 3.141592653589793

/**Define input**/
#define scanint(a) scanf("%d",&a)
#define scanLLD(a) scanf("%lld",&a)
#define scanstr(s) scanf("%s",s)
#define scanline(l) scanf(" %[^\n]",l)
#define scandouble(d) scanf("%lf",&d)
#define scanchar(c) scanf("%c",&c)

/**Define Bitwise operation**/
#define check(n, pos) (n & (1ll<<(pos)))
#define biton(n, pos) (n | (1ll<<(pos)))
#define bitoff(n, pos) (n & ~(1ll<<(pos)))

/**Define color**/
enum {WHITE,GREY,BLACK};

/**Sync off with stdio**/
#define __ cin.sync_with_stdio(false);\
           cin.tie();

/**Debug tools**/
#define what_is(x) cerr<<(#x)<<" is "<<x<<endl
using namespace std;

/**Typedef**/
typedef vector<int> vint;
typedef vector< vint > vint2D;
typedef vector<string> vstr;
typedef vector<char>vchar;
typedef vector< vchar >vchar2D;
typedef queue<int> Qi;
typedef queue< Qi > Qii;
typedef map<int,int> Mii;
typedef map<string,int> Msi;
typedef map<int,string> Mis;
typedef stack<int> stk;
typedef pair<int,int> pp;
typedef pair<int, pp > ppp;
typedef short int ll;
ll inf=1e18;

/**Template & structure**/

template<class T>T gcd(T a,T b){return b == 0 ? a : gcd(b, a % b);}

template<typename T>T lcm(T a, T b) {return a / gcd(a,b) * b;}

template<typename T>T last_bit(T n) { return n & 1; }

template<class T>T big_mod(T n,T p,T m){if(p==0)return (T)1;T x=big_mod(n,p/2,m);x=(x*x)%m;if(p&1)x=(x*n)%m;return x;}

template<class T>T modInv(T a, T m){T x, y; extgcd(a, m, x, y); x %= m; while (x < 0){x += m;} return x;}

template<class T> T extgcd(T a,T b,T& x,T& y){if(b==0){x=1;y=0;return a;}else{int g=extgcd(b,a%b,y,x);y-=a/b*x;return g;}}

template<class T>T multiplication(T n,T p,T m){if(p==0)return (T)0;T x=multiplication(n,p/2,m);x=(x+x)%m;if(p&1)x=(x+n)%m;return x;}

template<class T>T my_pow(T n,T p){if(p==0)return 1;T x=my_pow(n,p/2);x=(x*x);if(p&1)x=(x*n);return x;} ///n to the power p

template <class T> double getdist(T a, T b){return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));}/// distance between a & b

template <class T> T extract(string s, T ret) {stringstream ss(s); ss >> ret; return ret;}/// extract words or numbers from a line

template <class T> string tostring(T n) {stringstream ss; ss << n; return ss.str();}/// convert a number to string

template<class T> T Mod(T n,T m) {return (n%m+m)%m;} ///For Positive Negative No.

template<class T> T MIN3(T a,T b,T c) {return min(a,min(b,c));} /// minimum of 3 number

template<class T> T MAX3(T a,T b,T c) {return max(a,max(b,c));} ///maximum of 3 number

template <class T> void print_vector(T &v){int sz=v.size();if(sz)cout<<v[0];for(int i = 1; i < sz; i++)cout << ' '<<v[i];cout<<"\n";}/// prints all elements in a vector

bool isVowel(char ch){ ch=toupper(ch); if(ch=='A'||ch=='U'||ch=='I'||ch=='O'||ch=='E') return true; return false;}

bool isConsonant(char ch){if (isalpha(ch) && !isVowel(ch)) return true; return false;}

template <class R> R Josephus(R n,R k){R ans=1;for(R i=2;i<=n;i++)ans=(ans+k-1)%i+1;return ans;}

template <class R> R toitent_Phi2(R a){R result = a;for(R i=2;i*i<=a;i++){if(a%i==0) result=result-result/i;while(a%i==0) a=a/i;}if(a>1) result=result-result/a;return result;}

template <typename T> T Angle(T x1,T y1,T x2, T y2){ return atan( double(y1-y2) / double(x1-x2));}


//namespace debug{
//    int sum(){return 0;}
//    template<typename T,typename... Args> T sum(T a,Args... args) {return a+sum(args...);}
//    void print(){cout<<"\n";return;}template<typename T, typename... Args>void print(T a,Args... args){cout<<a<<" ";print(args...);}
//}


/**Direction**/
///int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};int dy[8] = {1, 1, 0, -1, -1, -1, 0, 1}; ///8 Direction
int dx[4] = {1, 0, -1, 0};int dy[4] = {0, 1, 0, -1}; ///4 Direction
///int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};///Knight Direction
///int dx[]={-1,-1,+0,+1,+1,+0};int dy[]={-1,+1,+2,+1,-1,-2}; ///Hexagonal Direction


/******************************End******************************/

#define mxn 12

char grid[mxn][mxn];
vector<pair<ll,ll> >V;
typedef map<ll,map<ll,map<ll,map<ll,map<ll,map<ll,ll> > > > > > state;
int M[mxn][mxn][mxn][mxn][mxn][mxn];
//state M;

struct data{
    ll a1,a2,b1,b2,c1,c2;
};

ll mova,movb,movc;
ll a1,a2,b1,b2,c1,c2;
ll a3,a4,b3,b4,c3,c4;
ll n;

ll moveA(ll x,ll y);
ll moveB(ll x,ll y);
ll moveC(ll x,ll y);

ll valid(ll x,ll y){
    if(x<1 || x>n) return 0;
    if(y<1 || y>n) return 0;
    if(grid[x][y]=='#') return 0;
    return 1;
}

ll moveA(ll x,ll y){
    a3=a1;
    a4=a2;

    if(valid(a3+x,a4+y)){
        if(a3+x==b1 && a4+y==b2){
            if(moveB(x,y)==0) return 0;
        }

        if(a3+x==c1 && a4+y==c2){
            if(moveC(x,y)==0) return 0;
        }

        mova=1;
        a3+=x;
        a4+=y;
        return 1;
    }

    return 0;
}

ll moveB(ll x,ll y){
    b3=b1;
    b4=b2;

    if(valid(b3+x,b4+y)){
        if(b3+x==a1 && b4+y==a2){
            if(moveA(x,y)==0) return 0;
        }

        if(b3+x==c1 && b4+y==c2){
            if(moveC(x,y)==0) return 0;
        }

        movb=1;
        b3+=x;
        b4+=y;
        return 1;
    }

    return 0;
}

ll moveC(ll x,ll y){
    c3=c1;
    c4=c2;

    if(valid(c3+x,c4+y)){
        if(c3+x==b1 && c4+y==b2){
            if(moveB(x,y)==0) return 0;
        }

        if(c3+x==a1 && c4+y==a2){
            if(moveA(x,y)==0) return 0;
        }

        movc=1;
        c3+=x;
        c4+=y;
        return 1;
    }

    return 0;
}

ll bfs(){
    a1=V[0].first;
    a2=V[0].second;

    b1=V[1].first;
    b2=V[1].second;

    c1=V[2].first;
    c2=V[2].second; //cout<<a1<<" "<<a2<<" "<<b1<<" "<<b2<<" "<<c1<<" "<<c2<<"\n";

    data D;
    D.a1=a1; D.a2=a2; D.b1=b1; D.b2=b2; D.c1=c1; D.c2=c2;
    queue<data>Q;
    Q.push(D);
    M[a1][a2][b1][b2][c1][c2]=1;

    while(!Q.empty()){
        data U=Q.front();
        Q.pop();

        a1=U.a1; a2=U.a2; b1=U.b1; b2=U.b2; c1=U.c1; c2=U.c2;
        if(grid[a1][a2]=='X' && grid[b1][b2]=='X' && grid[c1][c2]=='X') return  M[a1][a2][b1][b2][c1][c2]-1;

        for(ll i=0;i<4;i++){
            mova=movb=movc=0;
            ll x=1,y=1,z=1;

            if(mova==0){
                x=moveA(dx[i],dy[i]);
            }

            if(movb==0){
                y=moveB(dx[i],dy[i]);
            }

            if(movc==0){
                z=moveC(dx[i],dy[i]);
            }

            if(x+y+z>0){
                if(M[a3][a4][b3][b4][c3][c4]==0){
                    M[a3][a4][b3][b4][c3][c4]=M[a1][a2][b1][b2][c1][c2]+1;
                    data D;
                    D.a1=a3; D.a2=a4; D.b1=b3; D.b2=b4; D.c1=c3; D.c2=c4;
                    Q.push(D);
                }
            }
        }
    }

    return -1;
}

int main()
{
    __;

    ll T,t;
    ll i,j,k;

    cin>>T;
    for(t=1;t<=T;t++){
        cin>>n;

        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                char ch;
                cin>>ch;
                grid[i][j]=ch;
                if(ch=='A' || ch=='B'  || ch=='C'){
                    V.push_back({i,j});
                }
            }
        }

        ll ans=bfs();
        cout<<"Case "<<t<<": ";
        if(ans==-1){
            cout<<"trapped\n";
        }
        else cout<<ans<<"\n";

        V.clear();
        mem(M,0);
    }

    return 0;
}

