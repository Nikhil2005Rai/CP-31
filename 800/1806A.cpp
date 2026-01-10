#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;

    if(d < b) {
        cout<<-1<<endl;
        return;
    }

    int y = d - b;
    a += y;
    if(c > a) {
        cout<<-1<<endl;
        return;
    }

    cout<< y + a - c<<endl;

}

int main() {
    int t;
    cin>>t;

    while(t--) solve();


    return 0;
}