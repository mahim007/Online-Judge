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
#define scanline(l) scanf(" %[^\n]",l);

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
///int dx[4] = {1, 0, -1, 0};int dy[4] = {0, 1, 0, -1}; ///4 Direction
///int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};///Knight Direction
///int dx[]={-1,-1,+0,+1,+1,+0};int dy[]={-1,+1,+2,+1,-1,-2}; ///Hexagonal Direction


/******************************End******************************/

#define mxn 1009

struct data{
    ll node,degree;

    bool operator < (const data& D) const{
        return degree<D.degree;
    }
} D[mxn];

queue<data>Q;
ll notified[mxn],kill[mxn];
vector<ll>graph[mxn];



int main()
{ //freopen("1201output","w",stdout);
    __;

    ll T,t,i,j,k;
    ll n,m,u,v;
    ll res;

    scanLLD(T);
    for(t=1;t<=T;t++){
        res=0;
        scanLLD(n);
        scanLLD(m);

        for(i=1;i<=m;i++){
            scanLLD(u);
            scanLLD(v);
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        for(i=1;i<=n;i++){
            D[i].node=i;
            D[i].degree=graph[i].size(); //printf("node:%lld degree:%lld\n",i,D[i].degree);
            //V.push_back(D);
        }

        //sort(V.begin(),V.end());
        mem(notified,0);
        mem(kill,0);
        //ll sz=V.size();

        for(i=1;i<=n;i++){
            u=D[i].node;
            ll deg=D[i].degree;
            if(deg==0){
                res++;
                kill[u]=1;
            }
        }

        k=n;
        while(k--){
            for(i=1;i<=n;i++){
                u=D[i].node;
                ll deg=D[i].degree;

                if(kill[u]==1 || deg>1LL) continue;
                Q.push(D[i]); //printf("i=%lld u=%lld deg=%lld\n",i,u,deg);
            }

            while(!Q.empty()){
                data DD=Q.front();
                Q.pop();
                u=DD.node;
                ll deg=DD.degree; //printf("now u=%lld deg=%lld\n",u,deg);
                ll x=1;
                if(notified[u]==1) x=0;
                res+=x; //printf("res=%lld\n",res);
                kill[u]=1;
                for(j=0;j<graph[u].size();j++){
                    v=graph[u][j]; //printf("v=%lld\n",v);
                    if(notified[v]==0) notified[v]=x;
                    D[v].degree--;
                }
            }
        }



//        for(k=1;k<=n;k++)
//        for(i=1;i<=n;i++){
//            u=D[i].node;
//            ll deg=D[i].degree; printf("i=%lld u=%lld deg=%lld\n",i,u,deg);
//
//            if(kill[u]==1 || deg!=1LL) continue;
//            ll x=1;
//            if(notified[u]==1) x=0;
//            res+=x; printf("res=%lld\n",res);
//            kill[u]=1;
//            for(j=0;j<graph[u].size();j++){
//                v=graph[u][j]; printf("v=%lld\n",v);
//                notified[v]=x;
//                D[v].degree--;
//            }
//        }

        printf("Case %lld: %lld\n",t,res);
        for(i=1;i<=n;i++) graph[i].clear();

    }

    return 0;
}

