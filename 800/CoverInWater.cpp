#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;

        int count = 0, ans = 0;
        bool minreq = false;
        for(char ch: s) {
            if(ch == '.') count++;
            if(ch == '#') {
                ans += min(count, 2);
                if(count >= 3) minreq = true;
                count = 0;
            }
        }
        if(count >= 3) minreq = true;
        ans += min(count, 2);
        if(minreq)cout<<2<<endl;
        else cout<<ans<<endl;
    }

    return 0;
}