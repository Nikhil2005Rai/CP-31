#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s, t;
    cin >> s >> t;
    vector<int> freqT(26, 0);
    for(char ch: t) freqT[ch - 'A']++;

    for(int i = s.size() - 1; i >= 0; i--) {
        char ch = s[i];
        if(freqT[ch - 'A'] > 0) freqT[ch - 'A']--;
        else s[i] = '.';
    }
    string fin = "";
    for (char ch: s) {
        if(ch != '.') fin += ch;
    }

    if(fin == t) {
        cout << "YES";
    } else {
        cout << "NO";
    } cout << endl;
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