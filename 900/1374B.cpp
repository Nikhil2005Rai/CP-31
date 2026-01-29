#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long n;
    cin >> n;

    long long two = 0, three = 0;

    while(n > 1 && n % 2 == 0) {
        two++;
        n /= 2;
    }
    while(n > 1 && n % 3 == 0) {
        three++;
        n /= 3;
    }

    if(n != 1 || two > three) {
        cout << -1 << endl;
        return;
    }

    cout << three + (three - two ) << endl;
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