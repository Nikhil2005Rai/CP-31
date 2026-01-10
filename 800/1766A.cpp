#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> & pre) {

    int n;
    cin>>n;

    int ans = 0;

    for(int i = 0; i < pre.size(); i++) {
        if(pre[i] <= n) ans++;
        else break;
    }
    

    cout<<ans<<endl;
}

bool isRound(int n) {
    int zero = 0, nonzero = 0;
    while(n) {
        int digit = n % 10;
        if(digit) nonzero++;
        else zero++;
        n /= 10;
    }

    return nonzero == 1;
}

int main() {
    int t;
    cin>>t;
    vector<int> pre;
    for(int i = 1; i <= 999999; i++) {
        if(isRound(i))
            pre.push_back(i);
    }

    while(t--) solve(pre);
    return 0;
}
