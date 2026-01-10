#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;

    vector<int>v(n);
    for(int i = 0; i < n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    vector<int> b, c;
    c.push_back(v[n-1]);
    v.pop_back();
    for(int i = n-2; i >= 0; i--) {
        if(v[i] == v[i+1]) {
            c.push_back(v[n-1]);
            v.pop_back();
        }
        else break;
    }

    if(v.size() == 0) {
        cout<<-1<<endl;
        return;
    }

    cout<<v.size()<<" "<<c.size()<<endl;
    for(int num: v) cout<<num<<" ";
    cout<<endl;
    for(int num: c) cout<<num<<" ";
    cout<<endl;
    return;
}

int main() {
    int t;
    cin>>t;

    while(t--) solve();

    return 0;
}