#include<bits/stdc++.h>
using namespace std;

void solve() {

    int n;
    cin>>n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin>>v[i];

    int op = 0;
    bool prev = v[0] & 1; //T->Odd F->Even
    for(int i = 1; i < n; i++) {
        bool curr = v[i] & 1;
        if(prev ^ curr) {
            prev = curr;
        } else {
            op++;
        }
    }
    cout<<op<<endl;
}

int main() {
    int t;
    cin>>t;

    while(t--) solve();

    return 0;
}