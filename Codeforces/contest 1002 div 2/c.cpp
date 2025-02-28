#include <bits/stdc++.h>
using namespace std;

// Debug print utilities (active only when compiled with -DLOCAL)
template<typename A, typename B>
ostream& operator<<(ostream &os, const pair<A, B> &p) { 
    return os << '(' << p.first << ", " << p.second << ')'; 
}
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type>
ostream& operator<<(ostream &os, const T_container &v) { 
    os << '{'; 
    string sep; 
    for (const T &x : v) 
        os << sep << x, sep = ", "; 
    return os << '}';
}
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { 
    cerr << ' ' << H; 
    dbg_out(T...); 
}
#ifdef LOCAL
    #define dbg(...) cerr << '(' << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
    #define dbg(...)
#endif

// Macros and type aliases
#define FOR(i, a, b) for (long long i = (a); i < (b); i++)
#define pb push_back
typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;

// --- Globals for matching ---
// N: number of lists (which is our input n)
int N;
// adj[x] will contain all list indices i (0 <= i < N) for which list i contains x (where 0 <= x < N)
vector<vector<int>> adj;
// match[i] will store the target number assigned to list i, or -1 if none.
vector<int> match;

// DFS routine to try to assign target number 'num' to some list.
// 'visited' marks lists already tried in the current DFS.
bool dfs(int num, vector<bool> &visited) {
    for (int listIndex : adj[num]) {
        if (visited[listIndex])
            continue;
        visited[listIndex] = true;
        // If list is free or we can reassign the number currently using it
        if (match[listIndex] == -1 || dfs(match[listIndex], visited)) {
            match[listIndex] = num;
            return true;
        }
    }
    return false;
}

void solve() {
    ll n;
    cin >> n;
    // Read the n x n matrix g.
    vvl g(n, vl(n));
    FOR(i, 0, n) {
        FOR(j, 0, n)
            cin >> g[i][j];
    }
    
    // Process each row of g:
    // For each row, perform cumulative sum from right to left,
    // then append a 0 at the end.
    FOR(i, 0, n) {
        // If n > 1, do the cumulative addition.
        for (int j = n - 2; j >= 0; j--) {
            g[i][j] += g[i][j + 1];
        }
        g[i].pb(0);  // Append 0 at the end.
    }
    
    // For the matching:
    // - We view each row of g as one list (total N lists, with N = n).
    // - Our "target" numbers are 0, 1, 2, ..., n-1.
    //   (Since we can select at most one number per list, the maximum MEX is n.)
    N = n;
    adj.assign(n, vector<int>());
    
    // Build the bipartite graph:
    // For each list (row i), for each number x in that list,
    // if x is in the candidate range [0, n-1] (i.e. x is non-negative and x < n),
    // add an edge from target number x to list i.
    for (int i = 0; i < n; i++) {
        unordered_set<ll> uniqueNums;
        for (ll x : g[i]) {
            // Only consider x in [0, n-1]
            if (x >= 0 && x < n) { 
                uniqueNums.insert(x);
            }
        }
        for (ll x : uniqueNums) {
            adj[(int)x].pb(i);
        }
    }
    
    // Prepare the matching array: initially no list is assigned.
    match.assign(n, -1);
    
    // Try to assign target numbers 0, 1, ..., n-1 to lists.
    // The first target number for which no matching can be found will be our MEX.
    int mex = 0;
    for (int num = 0; num < n; num++) {
        vector<bool> visited(n, false);
        if (dfs(num, visited))
            mex++;
        else
            break;  // Found the first candidate that cannot be matched.
    }
    
    cout << mex << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // Number of test cases.
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
