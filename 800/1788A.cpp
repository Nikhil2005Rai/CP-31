#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int two = 0;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin>>v[i];
        if(v[i] == 2) two++;
    }

    if(two & 1) {
        cout<<-1<<endl;
        return;
    }

    int cnt = 0;
    for(int i = 0; i < n-1; i++) {
        if(v[i] == 2) cnt++;
        if(cnt == two / 2) {
            cout<<i+1<<endl;
            return;
        }
    }

    cout<<-1<<endl;
    return;


}

int main() {
    int t;
    cin>>t;

    while(t--) solve();

    return 0;
}