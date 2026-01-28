#include <bits/stdc++.h>
#define int long long 
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    int one = 0, zero = 0;
    for(int &x: v) {
        cin >> x;
        if(x == 0) zero++;
        if(x == 1) one++;
    }
    int sum = accumulate(v.begin(), v.end(), 0);
    int ans = one * pow(2, zero);
    

    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}