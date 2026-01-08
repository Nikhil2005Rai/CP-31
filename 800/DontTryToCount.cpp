#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) 
    {
        int n, m;
        string x, s;
        cin>>n>>m>>x>>s;

        int count = 0;
        while(true) {
            if(x.find(s) != string::npos) {
                break;
            } 
            else if (x.length() > s.length() && count > 1) {
                count = -1;
                break;
            }
            else {
                x += x;
                count++;
            }
        }
        cout<<count<<endl;

    }

    return 0;
}