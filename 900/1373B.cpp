#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    cin >> s;

    int ones = 0, zeroes = 0;
    for(char ch: s) {
        if(ch == '0') zeroes++;
        else ones++;
    }

    int mov = min(zeroes, ones);

    if(mov & 1) {
        cout << "DA" << endl;
    } else {
        cout << "NET" << endl;
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