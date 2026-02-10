#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while (t--) {
        long long n, p;
        cin >> n >> p;

        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        vector<pair<long long, long long>> offers(n);
        for (int i = 0; i < n; i++) {
            offers[i] = {b[i], a[i]};
        }

        sort(offers.begin(), offers.end());

        long long totalCost = p; 
        long long used = 1;      

        for (auto &offer : offers) {
            long long cost = offer.first;
            long long qty  = offer.second;

            if (cost >= p) break;

            if (used + qty > n) {
                totalCost += (n - used) * cost;
                used = n;
                break;
            }

            totalCost += qty * cost;
            used += qty;
        }

        totalCost += (n - used) * p;

        cout << totalCost << "\n";
    }

    return 0;
}
