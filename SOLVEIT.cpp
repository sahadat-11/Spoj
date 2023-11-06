//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, q; cin >> n >> q;
   set<int> st;
   while(q--) {
     int tp; cin >> tp;
     if(tp == 1) {
        int k; cin >> k;
        st.insert(k);
     }
     else {
        int x; cin >> x;
        auto id = st.lower_bound(x);
        if(id != st.end()) cout << *id << "\n";
        else cout << "-1\n";
     }
   } 
   return 0;
}
//https://www.geeksforgeeks.org/set-lower_bound-function-in-c-stl/