#include <bits/stdc++.h>

using namespace std;

void solve() {
	long long x, n;
	cin >> x >> n;

	long long ans;
	if(n % 4 == 0) {
		ans = 0;
	} else if (n % 4 == 1) {
		ans = -n;
	} else if (n % 4 == 2) {
		ans = 1;
	} else {
		ans = n + 1;
	}

	if(x % 2 == 0) {
		ans = x + ans;
	} else {
		ans = x - ans;
	}

	cout << ans << endl;
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