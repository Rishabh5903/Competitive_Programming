#include <bits/stdc++.h>
#include<sstream> 
using namespace std;
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ', ' << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ', '; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << '(' << #__VA_ARGS__ << '):', dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif
#define ar array
#define ll long long
#define ld long double
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<ll>
#define vvl vector<vector<ll>>
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define FOR(i,a,b) for( long long int i = a; i<b;i++)
#define pb push_back
int modmul(int a,int b,int m){ a %= m;b %= m; return (a * b) % m;}
int modadd(int a,int b,int m){ a %= m;b %= m; return (a + b) % m;}
int modsub(int a,int b,int m){ a %= m;b %= m; return (a - b + m) % m;}
int gcd(int a, int b){ if(b == 0) return a; return gcd(b, a % b);}
int expo(int a,int n,int md){ int res=1; while(n){ if(n&1) {res = modmul(res,a,md);--n;} else {a = modmul(a,a,md);n >>= 1;}} return res;}
int expo(int a,int n){ int res=1; while(n){ if(n&1) {res *= a;--n;} else {a *= a;n >>= 1;}} return res;}
template <typename T> bool revsort(T a, T b){return a > b;}
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e20;
const ld EPS = 1e-20;
ll maxm(vector<ll> v){
sort(all(v));
return v[v.size()-1];
}
ll minm(vector<ll> v){
sort(all(v));
return v[0];
}
void solve() {
// ll n;
// cin>>n;
// ll l[n];
// string s;
// cin>>s;
vvi a,b,c;
for(ll i=0;i< 4;i++){
    vi temp(4);
    FOR(j,0,4){char s;
        cin>>s;if(s=='#')temp[j]=1;else temp[j]=0;
    }
    a.pb(temp);
}
for(ll i=0;i< 4;i++){
    vi temp(4);
    FOR(j,0,4){char s;
        cin>>s;if(s=='#')temp[j]=1;else temp[j]=0;
    }
    b.pb(temp);
}
for(ll i=0;i< 4;i++){
    vi temp(4);
    FOR(j,0,4){char s;
        cin>>s;if(s=='#')temp[j]=1;else temp[j]=0;
    }
    c.pb(temp);
}
vector<vvi> ma,mb,mc;
ma.pb(a);mb.pb(b);mc.pb(c);
FOR(i,1,4){
    
    FOR(j,1,4){
        vvi A1(4,vi(4,0)),B1(4,vi(4,0)),C1(4,vi(4,0));
        vvi A2(4,vi(4,0)),B2(4,vi(4,0)),C2(4,vi(4,0));
        int fpa=1,fma=1;
        int fpb=1,fmb=1;
        int fpc=1,fmc=1;
        FOR(p,0,4){
            FOR(q,0,4){
                if(fpa){
                    if(ma[0][p][q]==1 && (p+i)<4 && (q+j)<4){A1[p+i][q+j]=1;}
                    else if(ma[0][p][q]==1)fpa=0;
                }
                if(fma){
                    if(ma[0][p][q]==1 && (p-i)>=0 && (q-j)>=0){A2[p-i][q-j]=1;}
                    else if(ma[0][p][q]==1)fma=0;
                }
                if(fpb){
                    if(mb[0][p][q]==1 && (p+i)<4 && (q+j)<4){B1[p+i][q+j]=1;}
                    else if(mb[0][p][q]==1)fpb=0;
                }
                if(fmb){
                    if(mb[0][p][q]==1 && (p-i)>=0 && (q-j)>=0){B2[p-i][q-j]=1;}
                    else if(mb[0][p][q]==1)fmb=0;
                }
                if(fpc){
                    if(mc[0][p][q]==1 && (p+i)<4 && (q+j)<4){C1[p+i][q+j]=1;}
                    else if(mc[0][p][q]==1)fpc=0;
                }
                if(fmc){
                    if(mc[0][p][q]==1 && (p-i)>=0 && (q-j)>=0){C2[p-i][q-j]=1;}
                    else if(mc[0][p][q]==1)fmc=0;
                }
            }
        }
        if(fpa)ma.pb(A1);if(fma)ma.pb(A2);if(fpb)mb.pb(B1);if(fmb)mb.pb(B2);if(fpc)mc.pb(C1);if(fmc)mc.pb(C2);
    }
}
cout<<mb<<endl;
int sa=ma.size(),sb=mb.size(),sc=mc.size();
FOR(k,0,3){
    FOR(t,0,sa){
    vvi A(4,vi(4,0));
    FOR(i,0,4){
        FOR(j,0,4){
            // cout<<i<<" "<<j<<" "<<k<<endl;
            A[4-i-1][j]=ma[k*sa+t][i][j];
        }
    }ma.pb(A);
    }
    FOR(t,0,sb){
    vvi B(4,vi(4,0));
    FOR(i,0,4){
        FOR(j,0,4){
            // cout<<i<<" "<<j<<" "<<k<<endl;
            B[4-i-1][j]=ma[k*sb+t][i][j];
        }
    }mb.pb(B);
    }
    FOR(t,0,sc){
    vvi C(4,vi(4,0));
    FOR(i,0,4){
        FOR(j,0,4){
            // cout<<i<<" "<<j<<" "<<k<<endl;
            C[4-i-1][j]=ma[k*sc+t][i][j];
        }
    }mc.pb(C);
    }

}
cout<<mb<<endl;
int f=0;
for(auto i:ma){
    set<pair<int,int>> s;
    for(auto j:mb){
        for(auto k:mc){
            FOR(p,0,4){
                FOR(q,0,4){
                    if(i[p][q]+j[p][q]+k[p][q]==1)s.insert({p,q});
                }
            }
        }
    }
    if(s.size()==16){cout<<"Yes"<<endl;f=1;break;}
}
if(!f)cout<<"No"<<endl;
}
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
int n = 1;
// cin >> n;
for (int t = 1; t <= n; t++) {
// cout << 'Case #' << t << ': ';
solve();
}
}