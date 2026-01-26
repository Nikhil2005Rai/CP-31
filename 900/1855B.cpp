#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    int ans = 1;
    while(true) {
        if(n % ans != 0) break;
        ans++;
    }
    cout<<ans-1<<endl;
}

int main() {
    int t;
    cin>>t;

    while(t--) solve();

    return 0;
}