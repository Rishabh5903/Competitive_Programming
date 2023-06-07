#include <bits/stdc++.h>
#include<sstream> 
using namespace std;
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define FOR(i,a,b) for( long long int i = a; i<b;i++)
#define pb push_back
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e20;
const ld EPS = 1e-20;
void solve() {
ll n;
cin>>n;
ll l[n];
ll a,b,c,d,e,f;
for(ll i=0;i< 6;i++){
cin>>l[i];
}
a=l[0];b=l[1];c=l[2];d=l[3];e=l[4];f=l[5];
ll x,y;
cin>>x>>y;
ll pivot=1;
if(abs(c-a)+abs(d-b)==1 && abs(e-a)+abs(f-b)==1){
    pivot=0;
}
else if(abs(c-e)+abs(d-f)==1 && abs(e-a)+abs(f-b)==1){
    pivot=2;
}
// cout<<pivot<<endl;
        if ((l[2*pivot] == 1 || l[2*pivot] == n) && (l[2*pivot+1] == 1 || l[2*pivot+1] == n)){
            if (x == l[2*pivot] || y == l[2*pivot+1]) cout << "YES" << '\n';
            else cout << "NO" << '\n';
        }
else{
    // cout<<"debug"<<endl;
    // cout<<x-l[2*pivot]<<" "<<y-l[2*pivot+1]<<endl;
    // cout<<-3%2<<endl;
    if(abs(x-l[2*pivot])%2==1 && abs(y-l[2*pivot+1])%2==1)
    cout<<"NO"<<endl;
    else 
cout<<"YES"<<endl;
}
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