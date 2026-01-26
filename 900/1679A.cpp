#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long n;
    cin >> n;
    if(n & 1 || n < 4) {
        cout << -1 << endl;
        return;
    }

    long long minBus = 0, maxBus = 0;
    minBus += n / 6;
    long long rem = n % 6;
    if(rem != 0) minBus++;

    maxBus += n / 4;
    cout<<minBus<<" "<<maxBus<<endl;    
    
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