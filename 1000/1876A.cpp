#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
    ll n, p;
    cin >> n >> p;

    vector<ll> a(n), b(n);
    for (ll &x : a) cin >> x;
    for (ll &x : b) cin >> x;

    vector<pair<ll,ll>> v;
    for (int i = 0; i < n; i++)
        v.push_back({b[i], a[i]}); // cost, people

    sort(v.begin(), v.end());

    ll rem = n;
    ll cost = 0;

    for (auto &pr : v) {
        ll cst = pr.first;
        ll cnt = pr.second;

        if (cst >= p || rem == 0) break;

        ll take = min(rem, cnt);
        cost += take * cst;
        rem -= take;
    }


    cost += rem * p;

    cout << cost << "\n";
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