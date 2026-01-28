#include <bits/stdc++.h>

using namespace std;

int minOps(vector<int> v, vector<int> target) {
    int op = 0;
    int j = 1;
    for(int i = v.size() - 1; i >= 0; i--) {
        if(v[i] == target[j]) {
            j--;
        } else op++;
        if(j < 0) break;
    }

    if(j < 0) return op;
    return INT_MAX;
}

void solve() {
    long long n; cin >> n;
    vector<int> v;

    while(n) {
        v.push_back(n % 10);
        n /= 10;
    }
    reverse(v.begin(), v.end());

    vector<vector<int>> options = {{0, 0}, {2, 5}, {5, 0}, {7, 5}};
    int ans = INT_MAX;
    for(auto it: options) {
        ans = min(ans, minOps(v, it));
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