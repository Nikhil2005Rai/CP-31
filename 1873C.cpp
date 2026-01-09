#include<bits/stdc++.h>
using namespace std;


int score(int i, int j) {
    if(j == 0 || j == 9 || i == 0 || i == 9) return 1;
    if(j == 1 || j == 8 || i == 1 || i == 8) return 2;
    if(j == 2 || j == 7 || i == 2 || i == 7) return 3;
    if(j == 3 || j == 6 || i == 3 || i == 6) return 4;
    if(j == 4 || j == 5 || i == 4 || i == 5) return 5;
    return -1;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        vector<string> v(10);
        for(int i = 0; i < 10; i++)
            cin>>v[i];
        int ans = 0;
        for(int i = 0; i < 10; i++) {
            for(int j = 0; j < 10; j++) {
                if(v[i][j] == 'X') {
                    ans += score(i, j);
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}