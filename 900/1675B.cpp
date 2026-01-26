#include <bits/stdc++.h>

using namespace std;


void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int &x : v) cin >> x;

    if(inc(v)) {
        cout<< 0 << endl;
        return;
    }

    int op = 0;
    for(int i = n-2; i >= 0; i--) {
        while(v[i+1] <= v[i]) {
            v[i] /= 2;
            op++;
            if(v[i] == 0) break;
        }
        if(v[i] == 0 && v[i+1] == 0) {
            cout << -1 << endl;
            return;
        }
    }

    cout << op << endl;
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