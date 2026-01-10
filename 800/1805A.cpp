#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin>>v[i];

    int xorall = 0;
    for(int it: v) xorall ^= it;

    // cout<<"XORALL - "<<xorall<<endl;

    if(n & 1) {
        cout<<xorall<<endl;
        return;
    }

    xorall == 0 ? cout<<1 : cout<<-1;
    cout<<endl;

    // cout<<"---------\n";

}

int main() {
    int t;
    cin>>t;

    while(t--) solve();
    // int num = 1 ^ 3 ^ -1;
    // cout<<num<<endl;
    return 0;
}

