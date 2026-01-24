#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin>>n>>k;
    string s;
    cin>>s;

    vector<int> fr(26, 0);
    for(char ch: s) fr[ch-'a']++;

    int e = 0, o = 0;
    for(int it: fr) {
        if(it ==0 ) continue;
        if(it & 1) o++;
        else e++;
    }

    if(k < o - 1) {
        cout<<"NO"<<endl;
        return;
    }

    if(k == o) {
        cout<<"YES"<<endl;
        return;
    }

   
        cout<<"YES"<<endl;
}

int main() {

    int t;
    cin>>t;

    while(t--) solve();

    return 0;
}