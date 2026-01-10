#include<bits/stdc++.h>
using namespace std;

void solve() {

    int n, a, b;
    cin>>n>>a>>b;

    if(((a == b) && (b == n)) ||n - a - b > 1) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
    cout<<endl;
}

int main() {

    int t;
    cin>>t;

    while(t--) solve();

    return 0;
}