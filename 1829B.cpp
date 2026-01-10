#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin>>v[i];
    int maxi = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(v[i] == 0) cnt++;
        else {
            maxi  = max(cnt, maxi);
            cnt = 0;
        }
    }maxi  = max(cnt, maxi);
    cout<<maxi<<endl;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}