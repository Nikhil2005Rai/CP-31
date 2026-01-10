#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c;
    cin>>a>>b>>c;
    bool anna = false;
   if(c & 1) anna = true;

   if(anna) {
        if(a >= b) {
            cout<<"First\n";
        } else {
            cout<<"Second\n";
        }
        return;
   }

   if(b >= a) {
        cout<<"Second\n";
   } else {
        cout<<"First\n";
   }

   return;
}

int main() {
    int t;
    cin>>t;

    while(t--) solve();
    return 0;
}