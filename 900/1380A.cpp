#include <bits/stdc++.h>

using namespace std;


void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int &x: v) cin >> x;
    

    
    for(int j = 1; j <= n-2; j++) {
        int left = -1, right = -1;
        for(int i = 0; i < j; i++) {
            if(v[i] < v[j]) {
                left = i;
                break;
            }
        }

        for(int k = j+1; k < n; k++) {
            if(v[k] < v[j]) {
                right = k;
                break;
            }
        }

        if(left != -1 && right != -1) {
            cout << "YES" << endl;
            cout << left + 1 << " " << j + 1 << " " << right + 1 <<endl;
            return;
        }
    }
    cout << "NO" << endl;

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