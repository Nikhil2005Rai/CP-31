#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n;
    cin>>n;

    vector<int> v(n) ;
    int k = 0, l = 0;
    for(int i = 0; i < n; i++) {
        cin>>v[i];
        if(v[i] == -1) k++;
        else l++;
    }

    int op = 0;

    while(k > l || k % 2 == 1) {
        k--;
        l++;
        op++;
    }
    cout<<op<<endl;
    
}

int main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}