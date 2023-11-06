//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   cin.ignore();
   while(t--) {
      string s;
      getline(cin, s);
      //cout << s << endl;
      stringstream ss(s);
      string x;
      set<string> st;
      while(ss >> x) {
         st.insert(x);
      }
      //for(auto u : st) cout << u << " "; cout << "\n";
      cout << st.size() << "\n";
   }
   return 0;
}