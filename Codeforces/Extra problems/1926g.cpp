// #include <cmath>
#include <bits/stdc++.h> 
using namespace std;
// ================================TYPEDEFs======================================================
#define int          long long
#define vi           vector<int>
#define vf           vector<float>
#define vd           vector<double>
#define vc           vector<char>
#define vs           vector<string>
#define vvi          vector<vector <int>>
#define vvc          vector<vector<char>>
#define vb           vector<bool>
#define si           set<int>
#define debug        cout<<"working here..."<<endl;
#define rv(i,vt)     for (auto i:vt)
#define FOR(i,n)     for( int i=0; i < n; i++) 
#define FORR(i,p,n)  for(int i=p; i < n; i++)
#define FORB(i,m,n)  for (int i=m;i>n;i--)
#define vllin(vec,n) FOR(i, n){int k; cin >>k ; vec.pb(k);}
#define viin(vec,n)  FOR(i, n){int k; cin >>k ; vec.pb(k);}
#define arrin(arr,n) FOR(i, n){int k; cin >>arr[i];}
#define all(x)       x.begin(), x.end()
#define uniq(arr)    {sort(all(arr));arr.erase(unique(all(arr)),arr.end());}
#define pb           push_back
#define pob          pop_back
#define lb           lower_bound
#define ub           upper_bound
#define mp           make_pair
#define PI           3.1415926535897932384626433832795
#define MOD          1000000007
#define MOD1         998244353
#define NMAX         1000007
#define MP           make_pair
#define f            first 
#define s            second
#define cntbit(x)    __builtin_popcountll(x)
#define ce(i)         cout<<i<<endl
#define pnl          cout<<endl

// ================================FUNCTIONS======================================================
void y_n(bool check){
    if(check){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return;
    }
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);   
}

// int lcm(int a, int b){
//     return (a*b)/gcd(a,b);
// }

bool float_compare(double a, double b) {
    double tolerance = 1e-9;
    return std::abs(a - b) <= tolerance;
}

// template<class elemType>
void pv(vi vec){
    int n=vec.size();
    FOR(i,n){
        cout << vec[i] << " \n"[i==n-1];
    }
    }
template<class elemType>
void max_vector(elemType * vec){
    return *max_element(vec.begin(), vec.end());}


void print_array( int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    }



vi primeFactorization(int n){
    vi factors;
    while (n % 2 == 0)
    {
        factors.pb(2);
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            factors.pb(i);
            n = n/i;
        }
    }
    if (n > 2) factors.pb(n);
    return factors;
    }

int sumofarray( vi arr){
    int sum=0;
    int size=arr.size();
    FOR(i,size){
        sum+=arr[i];
    } 
    return sum;
    }

string trim(const string& str) {
    // Find the first non-space character
    auto start = find_if_not(str.begin(), str.end(), ::isspace);
    
    // If the string is empty or contains only spaces
    if (start == str.end()) {
        return "";
    }
    
    // Find the last non-space character
    auto end = find_if_not(str.rbegin(), str.rend(), ::isspace).base();
    
    // Return the substring from the first non-space to the last non-space
    return string(start, end);
}


vi prefix_sum(vi vec){
    vi prefx_sum;
    int sum = 0;
    FOR(i,vec.size()){
        sum+=vec[i];
        prefx_sum.pb(sum);
    }
    return prefx_sum; 
    }

vi suffix_sum(vi vec){
    vi suffx_sum;
    int sum = 0;
    FOR(i,vec.size()){
        sum+=vec[vec.size()-i-1];
        suffx_sum.pb(sum);
    }
    reverse(all(suffx_sum));
    return suffx_sum; 
    }

void reverseArray(int arr[], int start, int end){
    while (start < end)
    {
        int temp = arr[start]; 
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    }
bool isPrime(int n){
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0)
            return false;
    }
    return true;
    }

int count_x(int number,int x){
    int count = 0;
    while(true){
        if ((number%x)==0){
            count++;
            number/=x;
        }
        else{
            return count;
        }
    }
    return 0;
}


// double myPow(double x, int n) {
//         if (x==1) return 1;
//         if (n<0) return 1/(myPow(x,abs(n)));
//         if (n==1) return x;
//         else if (n==0) return 1;
//         else if (n%2==0) return myPow(x*x,n/2);
//         else return (x*(myPow((x*x),(n-1)/2)));
//         return x;
//     }

int accurateCeil(int a, int b) {
    int val = a / b;
    while (val * b < a)
        val++;
    return val;
}
int nCr(int n, int r) {
    if (r > n) return 0;
    if (r == 0 || n == r) return 1;
    double res = 0;
    for (int i = 0; i < r; i++) {
        res += log(n-i) - log(i+1);
    }
    return round(exp(res));
}
long long binomialCoefficientMod(int n, int r) {
    if (r > n - r) {
        r = n - r;  // Choosing the smaller of r and (n-r) for optimization
    }

    vi dp(r + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= n; ++i) {
        for (int j = min(i, r); j > 0; --j) {
            dp[j] = (dp[j] + dp[j - 1]) % MOD;  // Apply modulo operation
        }
    }

    return dp[r];
}



vvi generateSubsets(int n) {
    vvi ans;
    for (int mask = 0; mask < (1 << n); mask++) {
        vector<int> subset;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                subset.push_back(i + 1); // Assuming the set elements are 1-indexed
            }
        }
        // Process the subset (in this example, just printing it)
        ans.pb(subset);
    }
    return ans;
}


vi maxSubArraySum(vi &a)
{   int size=a.size();
    int max_so_far = INT_MIN, max_ending_here = 0,
        start = 0, end = 0, s = 0;

    for (int i = 0; i < size; i++) {
        max_ending_here += a[i];

        if (max_so_far < max_ending_here) {
            max_so_far = max_ending_here;
            start = s;
            end = i;
        }

        if (max_ending_here < 0) {
            max_ending_here = 0;
            s = i + 1;
        }
    }
    return {max_so_far,start,end};
    // cout << "Maximum contiguous sum is " << max_so_far
    //      << endl;
    // cout << "Starting index " << start << endl
    //      << "Ending index " << end << endl;
}


vi divisors(int n){
    vi ans;
    FORR(i,2,ceil(sqrt(n)+1)){
        if((n%i)==0) {
            ans.pb(i);
            if(i*i!=n) ans.pb(n/i);
            }
    }
    uniq(ans);
    return ans;
}

// int num_intrsc(int l1,int r1,int l2,int r2){
//     return max(0ll,min(r1,r2)-l2+1);
// }


string bin(int num){
    bitset<64> bits(num);
    return bits.to_string();
    // return ans;
}







// ==========================FACTORIZATION USING SIEVE=========================

#define MAXN 1

// stores smallest prime factor for every number
int spf[MAXN];

// Calculating SPF (Smallest Prime Factor) for every
// number till MAXN.
// Time Complexity : O(nloglogn)
void sieve()
{
    spf[1] = 1;
    for (int i = 2; i < MAXN; i++)

        // marking smallest prime factor for every
        // number to be itself.
        spf[i] = i;

    // separately marking spf for every even
    // number as 2
    for (int i = 4; i < MAXN; i += 2)
        spf[i] = 2;

    for (int i = 3; i * i < MAXN; i++) {
        // checking if i is prime
        if (spf[i] == i) {
            // marking SPF for all numbers divisible by i
            for (int j = i * i; j < MAXN; j += i)

                // marking spf[j] if it is not
                // previously marked
                if (spf[j] == j)
                    spf[j] = i;
        }
    }
}

// A O(log n) function returning primefactorization
// by dividing by smallest prime factor at every step
vi getFactorization(int x)
{
    vector<int> ret;
    while (x != 1) {
        ret.pb(spf[x]);
        x = x / spf[x];
    }
    return ret;
}


template<typename T> struct iterseg{
    // starts with iterseg<int> sgtr;
    const T ID =-1; // initial value of elements
    T comb(T a,T b){ //type of segment tree
        return max(a,b);
    }
    int n;vector<T> tree;
    void init(int _n){  //initializes with size n
        n=_n;
        tree.assign(2*n,ID);
    }
    void pull(int p){
        tree[p]=comb(tree[2*p],tree[2*p+1]);
    }
    void upd(int p,T val){ // updates at index p with val
        p+=n;
        tree[p]=val;
        for (p/=2;p;p/=2){
            pull(p);
        }
    }
    T query(int l,int r){ // answer query for range
        l+=n; r+=n+1;
        T ra=ID;
        T rb=ID;
        for (l,r;l<r;l/=2,r/=2){
            if (l&1) ra=comb(ra,tree[l++]);
            if (r&1) rb=comb(tree[--r],rb);
        }
        return comb(ra,rb);
    }
};

int mex(vector<int> &arr1)
{   
    int N=arr1.size();
    vi arr=arr1;
    sort(arr.begin(), arr.end());

    int mex = 0;
    for (int idx = 0; idx < N; idx++) if (arr[idx] == mex) mex += 1;
    return mex;
}

bool isPowerOfTwo(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}
// ============================================================================================

// ===================================CODE GOES HERE===========================================

int answer=0;
void callfor(int root, vvi & childs, vi& parent,string& state){
    // ce(state);
    // ce(root);
    int cs=0,cp=0;
    if(state[root-1]=='P'){

        FOR(i,childs[root].size()){
            if(state[childs[root][i]-1]=='S') cs++;
            else if(state[childs[root][i]-1]=='P') cp++;
            callfor(childs[root][i],childs,parent,state);
        }
        answer+=cs;
    }
    else if(state[root-1]=='S'){
        FOR(i,childs[root].size()){
            if(state[childs[root][i]-1]=='S') cs++;
            else if(state[childs[root][i]-1]=='P') cp++;
            callfor(childs[root][i],childs,parent,state);
        }
        answer+=cp;
    }
    else{
        // ce("here");
        FOR(i,childs[root].size()){
            if(state[childs[root][i]-1]=='S') cs++;
            else if(state[childs[root][i]-1]=='P') cp++;
        }
        // ce(cs);
        // ce(cp);
        if(cs>cp){
            answer+=cp;
            state[root-1]='S';
            if( root!=1 && state[parent[root-1]-1]=='P') answer++;
        }
        else if(cp>cs){
            answer+=cs;
            state[root-1]='P';
            if(root!=1 && state[parent[root-1]-1]=='S') answer++;
        }
        else{
            answer+=cs;
            if(root!=1) state[root-1]=state[parent[root-1]-1]; 
        }
        FOR(i,childs[root].size()) callfor(childs[root][i],childs,parent,state);
        // callfor(childs[root][i],childs,parent,state);
    }
    return;
}






int solve(){
    answer=0;
    int n;cin>>n;
    vi parent(n,0);
    FOR(i,n-1){
        cin>>parent[i+1];
    }
    string state;cin>>state;
    vvi childs(n+1);
    FOR(i,n){
        childs[parent[i]].pb(i+1);
    }
    // pv(parent);
    // FOR(i,n){
    //     pv(childs[i]);
    // }
    // ce(childs.size());
    
    int rep=INT_MAX;
    if(state[0]=='C'){
        state[0]='P';
        string ds=state;
        callfor(1,childs,parent,ds);
        rep=min(answer,rep);
        answer=0;
        state[0]='S';
        callfor(1,childs,parent,state);
        ce(min(answer,rep));
        return 0;
    }
    else callfor(1,childs,parent,state);
    ce(answer);
    return 0;
}


signed main() {
    ios::sync_with_stdio(0);cin.tie(0);
    int tests = 1;
    cin>>tests;
    // sieve(); 
    FOR(_,tests) {solve();}
    return 0;
}   