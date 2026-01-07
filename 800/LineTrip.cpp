#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n, k;
        cin>>n>>k;

        vector<int> v(n);
        for(int i = 0; i < n; i++) cin>>v[i];

        int gas = v[0];

        for(int i = 1; i < n; i++) 
            gas = max(gas, v[i]-v[i-1]);

        gas = max(gas, 2 * (k - v[n-1]));
        cout<<gas<<endl;
    }

    return 0;
}