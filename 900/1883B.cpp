#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin>>n>>k;
    string s;
    cin>>s;

    vector<int> freq(26, 0);
    for(char ch: s) 
        freq[ch - 'a']++;

    int even = 0, odd = 0;
    for(int x : freq) {
        if(x & 1) odd++;
    }
    even = n - odd;

    even -= max(k-odd, 0);
    odd -= min(k, odd);

    if(odd > 1 || even & 1) {
        cout<<"---NO"<<endl;
        return;
    }

    cout<<"---YES";
    cout<<endl;
}
//sdfa

int main() {
    int t;
    cin>>t;

    while(t--) solve();

    return 0;
}