#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m, i, j;
    cin >> n >> m >> i >> j;

    /*
        corners -> [1,1] [1,m] [n,1] [n,m]
    */

    // dist top-left 
    int dx1 = i-1, dy1 = j-1;

    // dist top-right 
    int dx2 = n-i, dy2 = m-j;

    if(dx1 + dy1 < dx2 + dy2) {
        cout << n << " " << 1 << " " << 1 << " " << m << endl;
    } else {
        cout << 1 << " " << 1 << " " << n << " " << m << endl;
    }
       
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