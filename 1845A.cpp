#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, k, n;
    cin>>n>>k>>x;
    
    if(x != 1) {
        cout<<"YES\n"<<n<<endl;
        while(n--) cout<<1<<" ";
        cout<<endl;
        return;
    }

    if(k == 1) {
        cout<<"NO"<<endl;
        return;
    }

    if(k == 2 && (n & 1)) {
        cout<<"NO"<<endl;
        return;
    }

    cout<<"YES"<<endl;
    if(n % 2 == 0) {
        cout<< n/2 << endl;
        for(int i = 1; i <= n / 2; i++)
            cout<<2<<" ";
        cout<<endl;
    } else {
        cout<<(n - 3) / 2 + 1<<endl;
        for(int i = 1; i <= (n - 3) / 2; i++)
            cout<<2<<" ";
        cout<<3<<endl;
    }
}

int main() {
    int t; cin >> t;
    while (t--) solve();
    return 0;
}