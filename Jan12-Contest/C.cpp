#include<bits/stdc++.h>
using namespace std;

int f(int x, int k, unordered_map<int, int>& dp) {
    if(x < k) return 1e9;
    if(x == k) return 0;
    if(dp.count(x)) return dp[x];
    if(x & 1) {
        return dp[x] = 1 + min(f(x / 2, k, dp), f(x / 2 + 1, k, dp));
    } 
    else return dp[x] = 1 + f(x / 2, k, dp);
}

void solve() {
    int x, k;
    cin>>x>>k;
    unordered_map<int, int> dp;
    int op = f(x, k, dp);
    if(op >= 1e9) cout<< -1;
    else cout<<op;
    cout<<endl;
}

int main() {
    int t;
    cin>>t;

    while(t--) solve();

    return 0;
}