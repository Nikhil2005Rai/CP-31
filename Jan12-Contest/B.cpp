#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

void solve() {
    ll s, k, m;
    if (!(cin >> s >> k >> m)) return;
    ll f = m / k;
    ll r = m % k;
    ll top = (f % 2 == 0) ? s : min(s, k);
    cout << max(0LL, top - r) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}