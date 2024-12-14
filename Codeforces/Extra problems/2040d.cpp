#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (long long i = a; i < b; i++)
#define sz(x) static_cast<long long>((x).size())
#define all(x) (x).begin(), (x).end()

#ifndef ONLINE_JUDGE
#endif

#define int long long
#define double long double
const long long inf = (long long) 1e18;
const int mod = (int) 998244353;

void solve(){
    int n; cin >> n;
    vector<vector<int>> adj(n);
    rep(i, 0, n-1)
    {
        int x, y; cin >> x >> y;
        x--; y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    set<int> odd;
    set<int> even;
    rep(i, 1, 2*n + 1)
    {
        if(i&1) odd.insert(i);
        else even.insert(i);
    }

    vector<int> val(n, 0);
    function<void(int, int)> dfs = [&](int v, int p)
    {
        if(v == 0)
        {
            val[v] = 1;
            odd.erase(1);
        }
        else
        {
            int par = val[p];
            if(par&1)
            {
                if(even.count(par + 1))
                {
                    val[v] = par + 1;
                    even.erase(par + 1);
                }
                else
                {
                    auto it = odd.lower_bound(par + 4);
                    if(it == odd.end()) assert(false);
                    val[v] = *it;
                    odd.erase(it);
                }
            }
            else
            {
                if(odd.count(par + 1))
                {
                    val[v] = par + 1;
                    odd.erase(par + 1);
                }
                else
                {
                    auto it = even.lower_bound(par + 4);
                    if(it == even.end()) assert(false);
                    val[v] = *it;
                    even.erase(it);
                }
            }
        }

        for(auto child: adj[v])
        {
            if(child == p) continue;
            dfs(child, v);
        }
    };

    dfs(0, -1);

    for(auto val: val) cout << val << ' ';
    cout << '\n';
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout << fixed << setprecision(10);

    int t = 1;
    cin >> t;
    while(t--) solve();
}
