#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>& v){
    for(int i = 1; i < v.size(); i++) {
        if(v[i] < v[i-1]) return false;
    } return true;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin>>v[i];

    //     if(isSorted(v)) {
    //         cout<<"YES\n";
    //         continue;
    //     }
    //     for(int i = 1; i < n-1; i++) {
    //         if(v[i] > v[i-1] && v[i] > v[i+1]) {
    //             if(v[i-1] > v[i+1]) {
    //                 cout<<"NO"<<endl;
    //                 break;
    //             }
    //             swap(v[i], v[i+1]);
    //         }
    //     }
    //     if(isSorted(v)) {
    //         cout<<"YES";
    //     } else cout<<"NO";
    //     cout<<endl;
        
        int mini = *min_element(v.begin(), v.end());
        if(v[0] == mini) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}