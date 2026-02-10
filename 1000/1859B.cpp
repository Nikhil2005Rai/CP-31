#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<vector<int>> v(n);
    int ans = 0;
    for(int i = 0; i < n; i++) {
        int m;
        cin >> m;
        v[i] = vector<int>(m);
        int mini = INT_MAX;
        for(int j = 0; j < m; j++) {
            cin >> v[i][j];
            mini1 = min(mini1, v[i][j]);
        }

        ans += mini;
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