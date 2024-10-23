
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 1000000000000000ll
#define MOD 1000000007

int dp[300000][2];
int chk(int i,int j,string & a,string & b, int t){
    int ans=0;
    if(t==1){
        if(a[i]=='A')ans++;
        if(b[j]=='A')ans++;
        if(b[j+1]=='A')ans++;
    }
    else if(t==2){
        if(a[i]=='A')ans++;
        if(b[j]=='A')ans++;
        if(a[i+1]=='A')ans++;
    }
    else{
        int cnt1=0,cnt2=0;
        if (a[i]=='A')cnt1++; if(a[i+1]=='A')cnt1++;if(a[i+2]=='A')cnt1++;
        if (b[j]=='A')cnt2++; if(b[j+1]=='A')cnt2++;if(b[j+2]=='A')cnt2++;
        return cnt1+cnt2;
    }
    return ans;
}
int help(int i,int j,string & a,string & b ,int& n){
    if(dp[i][j]!=-1)return dp[i][j];
    if(i==j && j==n)return dp[i][j]=0;

    if(i==n-1 && j==n-2){
        return dp[i][j]=chk(i,j,a,b,1);
    }
    else if(i==n-2 && j==n-1){
        return dp[i][j]=chk(i,j,a,b,2);
    }
    else{
        if(i<j)
        return dp[i][j]=max( chk(i,j,a,b,2)+help(i+2,j+1,a,b,n),
        chk(i,j,a,b,3)+help(i+3,j+3,a,b,n));
        else if(j>i)
        return dp[i][j]=max( chk(i,j,a,b,1)+help(i+1,j+2,a,b,n),
        chk(i,j,a,b,3)+help(i+3,j+3,a,b,n));
        else 
        return dp[i][j]=max(max( chk(i,j,a,b,1)+help(i+1,j+2,a,b,n),
        chk(i,j,a,b,2)+help(i+2,j+1,a,b,n)),
        chk(i,j,a,b,3)+help(i+3,j+3,a,b,n));
    }
    return 0;
}
void solve()
{
    memset(dp,-1,sizeof(dp));
int n;cin>>n;
string a,b;cin>>a>>b;
help(0,0,a,b,n);
cout<<dp[0][0]<<endl;

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;cin>>t;
    while(t--)
    {
        solve();
    }
}
