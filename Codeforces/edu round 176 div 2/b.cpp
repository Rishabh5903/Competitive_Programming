#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; 
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        if(k==1){
            cout<<max(a[0]+*max_element(a.begin()+1,a.end()),a[n-1]+*max_element(a.begin(),a.end()-1))<<endl;
            continue;
        }
        sort(a.begin(), a.end(), greater<long long>());
        
        long long sum = 0;
        for (int i = 0; i < k; i++){
            sum += a[i];
        }
        cout << sum + a[k] << "\n";
    }
    return 0;
}
