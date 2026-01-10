#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;

    string s;
    cin>>s;
    int i = 0, j = n-1;
    while(i < j) {
        if((s[i] == '0' && s[j] == '1') || (s[i] == '1' && s[j] == '0')) {
            i++;
            j--;
        } else break;
    }
    if(j < i) cout<<0;
    else cout << j - i + 1;
    cout<<endl;
}

int main() {

    int t;
    cin>>t;

    while(t--) solve();
    return 0;
}