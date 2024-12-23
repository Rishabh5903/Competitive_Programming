#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#define fr(i, n) for (ll i = 0; i < n; i++)
#define pb push_back
#define sze(x) x.size()
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#pragma GCC optimize("unroll-loops,O3,Ofast")
#pragma GCC target("avx2,avx,fma,bmi,bmi2,lzcnt,popcnt")
#define ff first
#define ss second
#define py cout << "YES\n"
#define pn cout << "NO\n"
#define mk minavkaria

int main() {
    // your code goes here
    int t;
    cin >> t;

    while (t--)
    {
        int x1,y1,z1,x2,y2,z2,k;
        cin>>x1>>y1>>z1>>x2>>y2>>z2>>k;
        
        int distX=abs(x1-x2);
        int distY=abs(y1-y2);
        int distZ=abs(z1-z2);
        
        vector<int> a={distX,distY,distZ};
        
        sort(rall(a));
        
        int gap=((a[0]+k-1)/k)-1;
        // cout<<gap<<"--\n";
        if(a[1]+a[2]>=gap)
        {
            // cout<<"I am here";
            cout<<distX+distY+distZ<<"\n";
        }
        else
        {
            int ext=gap-(a[1]+a[2]);
            cout<<distX+distY+distZ+ext+ext%2<<"\n";
        }
        
        
        
        
    }

    return 0;
}