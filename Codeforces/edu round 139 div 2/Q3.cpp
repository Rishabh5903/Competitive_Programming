#include <bits/stdc++.h>
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
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
void solve() {
    int n;
    cin>>n;
    char l1[n];
    char l2[n];
    char *l;
    for (int i = 0; i < n; i++)
    {cin>>l1[i];
    // cout<<l[i]<<endl;

        /* code */
    }
    for (int i = 0; i < n; i++)
    {cin>>l2[i];
    // cout<<l[i]<<endl;

        /* code */
    }
    ll count=0;
    if(n==1)
    {cout<<"YES"<<endl;
    return;}
    ll j=0;

    if ((l1[0]=='B' && l2[0]=='W') || l1==l2)
        l=l1;
    else if (l2[0]=='B' && l1[0]=='W')
        l=l2;
    else{
        // l=max(l1,l2);
        ll index=0;
        for (int i = 1; i < n; i++)
        { if (l1[i]=='B' && l2[i]=='W')
            {l=l2;
            index=i/* code */;
            break;}
            else if (l2[i]=='B' && l1[i]=='W'){
                // cout<<"debug1"<<endl;
                l=l1;
            index=i/* code */;
            break;
            }
        }
        
        if (index%2!=1)
            {
                // cout<<"index"<<endl;
                if (l==l1)
                l=l2;
            else
                l=l1;};}
    bool flag1= true;
    // cout<<j<<endl;
    while (j<n)
    
        // # if j<n1:
{      
    //  cout<<"debug"<<l[j]<<endl;
// cout<<(l==l1 ? "l1":"l2")<<endl;
    // cout<<l[j]<<endl;
         if (l[j]=='B')
                // # count-=1
     {           l[j]='D';
                if( l==l1)
                    {if (l2[j]=='D' or l2[j]=='W')
                        j+=1;
                    else
                        l=l2;}
                else if (l==l2)
                    {if (l1[j]=='D' or l1[j]=='W')
                        j+=1;
                    else
                        l=l1;};}
            else
                {flag1=false;
                break;}}

    // # print(flag1,flag2)
    // cout<<flag1<<endl;
    if (flag1) 
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
int n = 1;
cin >> n;
for (int t = 1; t <= n; t++) {
// cout << 'Case #' << t << ': ';
solve();
}
}