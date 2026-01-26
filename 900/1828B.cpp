#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> v(n), temp;
    for(int i = 0; i < n; i++) cin>>v[i];
    
    int k = v[0] - 1;

    for(int i = 0; i < n; i++) {
        k = __gcd(k, abs(v[i] - (i + 1)));
    }
    
    cout<<k<<endl;
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