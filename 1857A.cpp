#include <bits/stdc++.h>
using namespace std;

using vi = vector<int>;

#define all(x) begin((x)), end((x))
#define loop(i, a, b) for (int i = (a); i < (b); i++)

template<typename T>
void read(vector<T>& v) {
    for (auto& x : v)
        cin >> x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vi a(n); read(a);

        int sum = accumulate(all(a), 0);
        bool ok = false;
        loop(i, 0, n) {
            if (((sum - a[i]) & 1) == (a[i] & 1)){
                ok = true;
                break;
        }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}