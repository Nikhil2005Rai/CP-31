#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    vector<int> pre(n, 1);

    sort(v.begin(), v.end());

    for(int i = 1; i < n; i++) {
        if(v[i] - v[i-1] <= k) pre[i] += pre[i-1];
    }
    cout<<n - *max_element(pre.begin(), pre.end())<<endl; 
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