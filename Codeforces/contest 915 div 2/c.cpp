#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<char> l;
        for (char c : s) {
            l.push_back(c);
        }
        // l.pop_back();

        vector<char> arr(n, '.');
        char maxo = l.back();
        for (int i = 0; i <(n ); ++i) {
            if(l[n-i-1]>maxo)maxo=l[n-i-1];
            // maxo = max(maxo, l[n-i-1]);
            arr[n-i-1] = maxo;
        }

        vector<char> temp;
        bool f = true;

        sort(l.begin(), l.end());
        for (int i = 0; i < n; ++i) {
            if (s[i] != arr[i] && s[i] != l[i]) {
                f = false;
                break;
            } else if (s[i] == arr[i]) {
                temp.push_back(s[i]);
            }
        }

        if (!f) {
            cout << -1 << endl;
            continue;
        }

        vector<char> temp2 = temp;
        sort(temp2.begin(), temp2.end());
        reverse(temp2.begin(), temp2.end());
        int flag=1;
        for(int i=0;i<temp.size();i++){
            if(temp[i]!=temp2[i]){
                flag=0;break;
            }
        }
        if (flag) {
            int cnt = 1;
            for (int i = 0; i < temp.size() - 1; ++i) {
                if (temp[i] == temp[i + 1]) {
                    cnt++;
                } else {
                    break;
                }
            }
            cout << temp.size() - cnt << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
