#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int &x: v) cin >> x;
    if(v[0] == 1) v[0]++;
    cout<<v[0]<<" ";
    for(int i = 1; i < n; i++) {
        if(v[i] == 1) v[i]++;
        if(v[i] % v[i-1] == 0) v[i]++;
        cout<<v[i]<<" ";
    }
    cout<<endl;
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