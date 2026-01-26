#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b, n;
    cin>>a>>b>>n;
    vector<long long> v(n);
    long long cnt = 0;
    for(int i = 0; i < n; i++) {
        cin>>v[i];
    }
    long long ans = b;
    for(long long it: v) {
        ans  += min(it, a-1);
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin>>t;

    while(t--) solve();

    return 0;
}