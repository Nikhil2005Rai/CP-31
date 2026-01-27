#include <bits/stdc++.h>

using namespace std;

bool allEqual(vector<int>& v) {
    int a = v[0];
    for(int i = 1; i < v.size(); i++) {
        if(v[i] != a) return false;
    } return true;
}

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int &x: v) cin >> x;

    if(allEqual(v)) {
        cout << 0 << endl;
        return;
    }

    unordered_map<int, int> mp;
    for(int x : v) mp[x]++;

    int maxFr = 0;
    for(auto it: mp) {
        maxFr = max(maxFr, it.second);
    }
    int ans = 0;
    while(maxFr < n) {
        ans++;
        ans += min(n - maxFr, maxFr);
        maxFr *= 2;
    }

    cout << ans << endl;

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