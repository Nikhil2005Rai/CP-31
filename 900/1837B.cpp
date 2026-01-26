#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;

    int ans = 1;
    int conGr = 0, conSm = 0;
    int gr = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == '<') gr = 0;
        else gr++;
        conGr = max(conGr, gr);
    }
    int sm = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == '>') sm = 0;
        else sm++;
        conSm = max(conSm, sm);
    }

    cout<<max(conGr, conSm) + 1<<endl;
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