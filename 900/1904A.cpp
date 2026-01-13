#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, k1, k2, q1, q2;
    cin>>a>>b>>k1>>k2>>q1>>q2;

    set<pair<int, int>> king, queen;

    vector<pair<int,int>> moves = {
        {a, b}, {a, -b}, {-a, b}, {-a, -b},
        {b, a}, {b, -a}, {-b, a}, {-b, -a}
    };

    for(auto it: moves) {
        king.insert({k1 + it.first, k2 + it.second});
        queen.insert({q1 + it.first, q2 + it.second});
    }

    int cnt = 0;
    for(auto it: king) {
        if(queen.count(it)) cnt++;
    }
    cout<<cnt<<endl;
}

int main() {
    int t;
    cin>>t;

    while(t--) solve();

    return 0;
}