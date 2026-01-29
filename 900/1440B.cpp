#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n * k);
    for(int &x: v) cin >> x;

    int ans = 0;
    int ptr = n * k;
    while(k--) {
        ptr -= (n/2+1);
        ans += v[ptr];
    }
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