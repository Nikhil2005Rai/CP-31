#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    cin >> s;

    int n = s.length();
    if(s[0] != s[n - 1]) {
        (s[0] == 'a') ? s[0] = 'b' : s[0] = 'a';
    }

    cout << s << endl;
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