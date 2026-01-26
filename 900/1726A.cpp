#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> v(n);

    for(int &x : v) cin >> x;
    int a = v[n-1] - v[0];
    int b = INT_MIN;
    for(int i = 1; i < n; i++) 
        b = max(b, v[i] - v[0]) ;
    int c = INT_MIN;
    for(int i = 0; i < n-1; i++)
        c = max(c, v[n-1] - v[i]);
    int d = INT_MIN;
    for(int i = 1; i < n; i++) 
        d = max(d, v[i-1] - v[i]);
    int maxi = max({a, b, c, d}); 
    cout<<maxi<<endl;
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