#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>& v) {
    for(int i = 1; i < v.size(); i++) {
        if(v[i] < v[i-1]) return false;
    } return true;
}

void solve()  {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin>>v[i];

    if(!isSorted(v)) {
        cout<<0<<endl;
        return;
    }    

    int mini = INT_MAX;
    for(int i = 1; i < n; i++)
        mini = min(mini, abs(v[i] - v[i-1]));
 
    if(mini == 0) {
        cout<<1<<endl;
        return;
    }

    cout<<mini / 2 + 1<<endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) solve();

    return 0;
}