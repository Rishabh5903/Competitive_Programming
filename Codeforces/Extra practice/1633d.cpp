#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl "\n"
#define INF 4e18
using namespace std;

const int N=1e3+1;

// *---- SENSEI : Harshikesh ---***

void solve(){

	vector<int> dp(N,INT_MAX); dp[1]=0;

	for(int i=1;i<N;++i){
		for(int j=1;j<=i;++j){
			if(i+i/j<N)
				dp[i+i/j]=min(dp[i+i/j],dp[i]+1);
		}
        
	}
    for (int i = 0; i < N; ++i) {
    cout << dp[i] << " ";
}
cout << endl;

	int n,k; cin>>n>>k; k=min(k,12*n);

	vector<pair<int,int>> a(n);
	for(auto &i:a) cin>>i.first;
	for(auto &i:a) cin>>i.second;

	vector<vector<int>> ndp(n,vector<int>(k+1,-1));

	function<int(int,int)> f = [&](int index,int moves){
		if(moves<0) return INT_MIN;
		if(index==n) return 0;

		if(ndp[index][moves]!=-1) return ndp[index][moves];

		return ndp[index][moves]=max(f(index+1,moves),a[index].second+f(index+1,moves-dp[a[index].first]));
	};
    // cout<<dp<<endl;
	cout<<f(0,k)<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll tc;
	cin>>tc;
	while(tc--){
		solve();
	}

}