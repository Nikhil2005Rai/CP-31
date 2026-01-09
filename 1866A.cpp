#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int mini = INT_MAX;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin>>v[i];
        mini = min(mini, abs(v[i]));
    }

    cout<<mini;

    return 0;
}