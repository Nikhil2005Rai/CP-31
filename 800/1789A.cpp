#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin>>v[i];

    bool flag = false;
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(gcd(v[i], v[j]) <= 2) {
                flag = true;
                break;
            }
        }
        if(flag) break;
    }

    if(flag) cout<<"YES";
    else cout<<"NO";
    cout<<endl;
}

int main() {
    int t;
    cin>>t;

    while(t--) solve();

    return 0;
}