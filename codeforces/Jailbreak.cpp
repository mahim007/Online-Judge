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
typedef long long int ll;
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

#define mxn 109
char grid[mxn][mxn];
ll d[mxn][mxn];
ll r,c;
vector<pair<ll,ll> >V;

struct data{
    ll x,y;
};

data par[mxn][mxn];

ll valid(ll x,ll y){
    if(x<0 || x>=r) return 0;
    if(y<0 || y>=c) return 0;
    if(grid[x][y]=='*') return 0;
    return 1;
}

void bfs(ll x,ll y){
    d[x][y]=0;
    deque<pair<ll,ll> >dq;
    dq.push_front({x,y});

    while(!dq.empty()){
        pair<ll,ll>t=dq.front();
        dq.pop_front();
        ll ux=t.first;
        ll uy=t.second;

        for(ll i=0;i<4;i++){
            ll vx=ux+dx[i];
            ll vy=uy+dy[i];

            if(valid(vx,vy)){
                if(grid[vx][vy]=='.' || grid[vx][vy]=='$'){
                    if(d[ux][uy]<d[vx][vy]){
                        d[vx][vy]=d[ux][uy];
                        par[vx][vy].x=ux;
                        par[vx][vy].y=uy;
                        dq.push_front({vx,vy});
                    }
                }
                else{
                    if(d[ux][uy]+1<d[vx][vy]){
                        d[vx][vy]=d[ux][uy]+1;
                        par[vx][vy].x=ux;
                        par[vx][vy].y=uy;
                        dq.push_back({vx,vy});
                    }
                }
            }
        }
    }
}

int main()
{
    __;

    ll T,t;
    ll i,j,k;
    ll n,m,q;

    cin>>T;
    for(t=1;t<=T;t++){
        cin>>r>>c;
        for(i=0;i<r;i++) cin>>grid[i];

        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(grid[i][j]=='$'){
                    V.push_back({i,j});
                }
            }
        }

        ll ans=0;
        mem(d,63);
        bfs(V[0].first,V[0].second);
        ans=d[V[1].first][V[1].second];
        cout<<"from p1 to p2:"<<ans<<" "<<"\n";
        ll u=V[1].first;
        ll v=V[1].second;

        while(1){
            if(u==V[0].first && v==V[0].second) break;
            ll x,y;
            x=par[u][v].x;
            y=par[u][v].y;
            u=x;
            v=y;
            if(grid[u][v]=='#'){
                grid[u][v]='.';
            }
        }

        mem(d,63);
        bfs(V[1].first,V[1].second);
        ll zz=inf;
        for(i=0;i<c;i++){
            zz=min(zz,d[0][i]);
        }

        for(i=0;i<c;i++){
            zz=min(zz,d[r-1][i]);
        }

        for(i=0;i<c;i++){
            zz=min(zz,d[i][0]);
        }


        for(i=0;i<c;i++){
            zz=min(zz,d[i][c-1]);
        }

        cout<<ans+zz<<"\n";
        V.clear();
    }


    return 0;
}

