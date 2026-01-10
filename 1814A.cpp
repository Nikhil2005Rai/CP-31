#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin>>n>>k;

    if(k > n && (n & 1)) {
        cout<<"NO"<<endl;
        return;
    }

    if(n % 2 == 0 ||n % k == 0 || ((n - k) % 2) == 0) {
        cout<<"YES"<<endl;
        return;
    }

    cout<<"NO"<<endl;
}

int main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}