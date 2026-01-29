#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    cin >> s;

    int one = 0, zero = 0;
    for(char ch: s) {
        if(ch == '0') zero++;
        else one++;
    }
    int t = 0;
    // cout << max(one, zero) - min(one, zero) << endl;
    for(char ch: s) {
        if(ch == '0') {
            if(one > 0)  {
                t++;
                one--;
            }
            else break;
        } else {
            if(zero > 0) {
                t++;
                zero--;
            }
            else break;
        }
    }

    cout << s.length() - t << endl;
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