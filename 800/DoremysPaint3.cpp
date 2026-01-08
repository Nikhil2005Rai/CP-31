#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        int n;cin>>n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin>>v[i];
        
        map<int, int> mp;
        for(int it: v) mp[it]++;

        if(mp.size() >= 3) 
            cout<<"No";
        else if(mp.size() == 2) {
            // if(mp.begin().second == mp.rbegin().second) cout<<"Yes";
            if(abs(mp.begin()->second - mp.rbegin()->second) <= 1) cout<<"Yes";
            else cout<<"No";
        } else cout<<"Yes";
        cout<<endl;
    }
    return 0;
}