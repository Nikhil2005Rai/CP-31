#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for(int &x: v) cin >> x;

    int all_and = v[0];
    for(int i = 0; i < n; i++) all_and &= v[i];
    cout << all_and << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}