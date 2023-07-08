#include <bits/stdc++.h>
#define int long long
#define MAXN 200007
using namespace std;
 
using namespace std;
const int N = 1e6 + 5,M = 1e3 + 7;
const int mod = 1e9 + 7;
int s[N];
int n,m;
void solve(){
   int ans = 0;
   cin>>n>>m;
   for(int i=1;i<=n;++i) cin>>s[i];
   priority_queue<int,vector<int>,greater<int> >b;
   priority_queue<int>a;
   int cnt = 0;
   for(int i=m;i>1;--i){
   	cnt += s[i];
   	a.push(s[i]);
   	if(cnt>0){
   		cnt -= a.top()*2;
   		a.pop();
   		ans++;
   	}
   }
   cnt = 0;
   for(int i=m+1;i<=n;++i){
   	cnt += s[i];
   	b.push(s[i]);
   	if(cnt<0){
   		cnt -= b.top()*2;
   		b.pop();
   		ans++;
   	}
   }	
   cout<<ans<<'\n';
}
 
signed main()
{
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	
	return 0;
}