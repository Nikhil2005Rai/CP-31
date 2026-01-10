#include<bits/stdc++.h>
using namespace std;

bool allEqual(vector<int>& v) {
    for(int i = 1; i < v.size(); i++)
        if(v[i] != v[i-1]) return false;
    return true;
}

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin>>v[i];

    if(allEqual(v)) {
        cout<<"NO"<<endl;
        return;
    }

    sort(v.begin(), v.end(), greater<int>());
    swap(v[1], v[v.size()-1]);
    cout<<"YES"<<endl;
    for(int it: v)  
        cout<<it<<" ";
    cout<<endl;
}

int main() {

    int t;
    cin>>t;

    while(t--) solve();

    return 0;
}