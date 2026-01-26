#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> v(n), pre(n, 0);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        pre[i] = v[i];
        if(i > 0) pre[i] += pre[i-1];
    }
    int sum = accumulate(v.begin(), v.end(), 0);
    int temp = sum;
    while(q--) {
        int l, r, k;
        cin >> l >> r>> k;
        sum += (k * (r - l + 1));
        sum -= pre[r-1];
        if(l > 1) sum += pre[l-2];
        (sum & 1) ? cout << "YES" : cout << "NO";
        cout<<endl;
        sum = temp;
    }

    return;
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