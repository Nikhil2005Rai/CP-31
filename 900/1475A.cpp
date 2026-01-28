#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long n; cin >> n;

    if(n & 1) {
        cout << "YES" << endl;
        return;
    }

    while(n % 2 == 0) n /= 2;
    
    if(n > 1) {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
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